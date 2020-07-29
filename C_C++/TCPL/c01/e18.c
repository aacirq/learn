#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define MAXLINE 1000

int my_getline(char **line);
int my_remove(char *line);

int main() {
    int len;
    char *line;
    char *longest;

    while(len = my_getline(&line)) {
        if((len = my_remove(line))){
            printf("%d: %s", len, line);
        }
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

int my_remove(char *line) {
    int i;
    i = 0;
    while(line[i] != '\n') ++i;
    --i;
    // printf("i = %d\n", i);
    while((i >= 0) && ((line[i] == ' ') || (line[i] == '\t'))) --i;
    if(i >= 0) {
        ++i;
        line[i] = '\n';
        ++i;
        line[i] = '\0';
    }
    return i;
}