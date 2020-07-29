#include <stdio.h>
#include <stdlib.h>

int my_getline(char **line);
void reverse(char *line);

int main(void) {
    char *line;
    int len;
    while((len = my_getline(&line))) {
        reverse(line);
        printf("%d : %s", len, line);
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

void reverse(char *line) {
    int i, len;
    char t;
    len = 0;
    while(line[len] != '\0') ++len;
    if(line[len - 1] == '\n') --len;
    for(i = 0; i < len/2; ++i) {
        t = line[i];
        line[i] = line[len - i - 1];
        line[len - i - 1] = t;
    }
}