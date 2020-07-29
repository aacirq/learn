/*
 * Count words
 */

#include <stdio.h>

#define IN  1
#define OUT 0

main() {
    int nc, nw, nl, state;
    nc = nw = nl = 0;
    char c;
    state = OUT;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n') ++nl;
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) printf("%c\n", c);
            state = OUT;
        }
        else {
            printf("%c", c);
            if (state == OUT) { state = IN; ++nw; }
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}