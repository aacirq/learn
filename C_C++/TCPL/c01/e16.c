#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #define MAXLINE 1000

int my_getline(char **line);
void copy(char *to, char *from);

int main() {
    int len;
    int max;
    char *line;
    char *longest;

    max = 0;
    while(len = my_getline(&line)) {
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if(max > 0) printf("%s\n", longest);
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

void copy(char *to, char *from) {
    int i, len;
    i = 0;
    len = strlen(from);
    while((to[i] = from[i]) != '\0') {
        ++i;
    }
}