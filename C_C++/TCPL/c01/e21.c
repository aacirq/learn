#include <stdio.h>
#include <stdlib.h>

#define N 4

int my_getline(char **line);
int entab(char *line);

int main(void) {
    char *line;
    int len;
    while(len = my_getline(&line)) {
        printf("origin: %s : %d\n", line, len);
        len = entab(line);
        printf("detab: %d\n", len);
    }
    return 0;
}

int entab(char *line) {
    int i, j, p, len;
    i = len = 0;
    while(line[i] != '\0') {
        if(line[i] != ' ') {
            printf("%c", line[i]);
            ++len;
            ++i;
        } else {
            j = 1;
            while(((i + j) % N) && (line[i + j] == ' ')) {
                ++j;
            }
            if(!((i + j) % N)){
                printf("\\t");
                ++len;
            } else {
                for(p = i; p < (i + j); ++p) {
                    printf(" ");
                    ++len;
                }
            }
            i += j;
        }
    }
    return len;
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