/* 
 * Exercise 1-9
 */

#include <stdio.h>

main() {
    char pc, c;
    pc = 'a';
    while ((c = getchar()) != EOF) {
        if (c == ' ' && pc == ' ') continue;
        printf("%c", c);
        pc = c;
    }
}