#include <stdio.h>
#include <stdlib.h>

#define N 4

int my_getline(char **line);
void format_tab(char *line);

int main(void) {
    char *line;
    int len;
    while(len = my_getline(&line)) {
        format_tab(line);
    }
    return 0;
}

int my_getline(char **line) {
    char c;
    int i, len;
    len = 10;
    (*line) = (char *)malloc(len * sizeof(char));
    for(i = 0; ((c = getchar()) != EOF) && (c != '\n'); ++i) {
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

void format_tab(char *line) {
    int i, now_len, j;
    now_len = 0;
    for(i = 0; line[i] != '\0'; ++i) {
        if(line[i] == '\t') {
            printf(" ");
            j = 1;
            while((now_len + j) % N) {
                printf(" ");
                ++j;
            }
            now_len += j;
        } else {
            printf("%c", line[i]);
            ++now_len;
        }
    }
}