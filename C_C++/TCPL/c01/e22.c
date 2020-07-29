#include <stdio.h>
#include <stdlib.h>

#define N 10

void process(char *line);
int my_getline(char **line);

int main() {
    char *line;
    int len;
    while(len = my_getline(&line)) {
        process(line);
    }
}

void process(char *line) {
    int cur_len, i, j, p;
    cur_len = i = 0;
    while(line[i] != '\0') {
        if(line[i] != ' ') {
            printf("%c", line[i]);
            ++cur_len;
            ++i;
            if(cur_len >= N) { cur_len = 0; printf("\n"); }
        } else {
            if(cur_len == 0) { ++i; continue; }
            j = 0;
            while(((cur_len + j) <= N) && (line[i] == ' ')) {
                ++j; ++i;
            }
            if((cur_len + j) >= N) {
                printf("\n");
                cur_len = 0;
            } else {
                for(p = 0; p < j; ++p) printf(" ");
                cur_len += j;
            }
        }
    }
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