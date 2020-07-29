#include <stdio.h>
#include <stdlib.h>

#define IN  1
#define OUT 0

int my_getfile(char **line);
void process(char *content);

int main(void) {
    char *content;
    int len;
    len = my_getfile(&content);
    process(content);
    return 0;
}

void process(char *content) {
    int i;
    int state;
    state = OUT;
    for(i = 0; content[i] != '\0'; ++i) {
        if(state == IN){
            if(content[i] == '/' && content[i - 1] == '*')
                state = OUT;
        } else {
            if(content[i] == '/' && content[i + 1] == '*') {
                state = IN;
            } else if(content[i] == '/' && content[i + 1] == '/') {
                printf("\n");
                while(content[i++] != '\n');
                --i;
            } else {
                printf("%c", content[i]);
            }
        }
    }
}

int my_getfile(char **line) {
    char c;
    int i, len;
    len = 10;
    (*line) = (char *)malloc(len * sizeof(char));
    for(i = 0; (c = getchar()) != EOF; ++i) {
        (*line)[i] = c;
        if(i == len - 1) {
            len += 10;
            *line = (char *)realloc(*line, len * sizeof(char));
        }
    }
    if(c == '\n') {
        (*line)[i] = c;
        ++i;
    }
    (*line)[i] = '\0';
    return i;
}