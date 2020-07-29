/*
 * Exercise 1-8
 */

#include <stdio.h>

main() {
    int ns, nt, nl;
    char c;
    ns = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') ++ns;
        else if (c == '\t') ++ nt;
        else if (c == '\n') ++ nl;
    }
    printf("Number of spaces: %d\nNumber of tab: %d\nNumber of lines: %d\n", ns, nt, nl);
}