#include <stdio.h>

int power(int base, int n);

int main() {
    int i = 0;
    for(i = 0; i < 10; ++i) {
        printf("2^%d = %d, \t(-3)^%d = %d\n", i, power(2, i), i, power(-3, i));
    }
    return 0;
}

int power(int base, int n) {
    int res;
    for(res = 1; n > 0; --n) {
        res *= base;
    }
    return res;
}