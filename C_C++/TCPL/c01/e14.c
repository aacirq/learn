#include <stdio.h>

#define MAX_CHAR 0xff

int main(void) {
    int max_char, min_char, max_num;
    int i, j;
    int c_list[MAX_CHAR];
    char c;
    max_char = max_num = 0;
    min_char = MAX_CHAR;
    for(i = 0; i < MAX_CHAR; ++i) c_list[i] = 0;

    while((c = getchar()) != EOF) {
        ++c_list[c];
        max_char = max_char > c ? max_char : c;
        min_char = min_char < c ? min_char : c;
    }

    for(i = min_char; i <= max_char; ++i) {
        max_num = max_num > c_list[i] ? max_num : c_list[i];
    }

    printf("char | number\n");
    for(i = min_char; i <= max_char; ++i) {
        printf("%4c | ", i);
        for(j = 1; j <= c_list[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}