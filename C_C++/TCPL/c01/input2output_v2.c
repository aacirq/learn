/*
 * Exercise 1-10
 */

#include <stdio.h>

main() {
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') printf("\\t");
        else if (c == '\b') printf("\\b");
        else if (c == '\\') printf("\\\\");
        else printf("%c", c);
    }
}