#include <stdio.h>

#define MAXLENGTH 1000
#define OUT 1
#define IN  0 
    
    
int main() {
    int length[MAXLENGTH], i, j;
    int min_len, max_len, state, len, max_num;
    char c;
    min_len = MAXLENGTH;
    len = max_len = 0;
    state = OUT;
    
    for(i = 0; i < MAXLENGTH; ++i) length[i] = 0;
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == '\n') {
            if(state == IN) {
                state = OUT;
                ++length[len];
                min_len = min_len < len ? min_len : len;
                max_len = max_len > len ? max_len : len;
                len = 0;
            }
        } else {
            state = IN;
            ++len;
        }
    }
    if(len != 0) {
        ++length[len];
        min_len = min_len < len ? min_len : len;
        max_len = max_len > len ? max_len : len;
    }

    
    

    
    printf("length | number\n");
    printf("-------|-------\n");
    for(i = min_len; i <= max_len; ++i) {
        printf("%6d | ", i);
        for(j = 0; j < length[i]; ++j) {
            printf("*");
        }
        printf("\n");
    }

    
    printf("vertical histgrom\n");
    for(i = min_len; i <= max_len; ++i) {
        max_num = max_num > length[i] ? max_num : length[i];
    }
    for(j = max_num; j >= 1; --j) {
        for(i = min_len; i <= max_len; ++i) {
            if(j <= length[i]) {
                printf("  *  ");
            } else {
                printf("     ");
            }
        }
        printf("\n");
    }
    for(i = min_len; i <= max_len; ++i) {
        printf(" %2d |", i);
    }
    printf("\n");

    return 0;
}