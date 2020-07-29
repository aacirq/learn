#include <stdio.h>

#define LOWER -20
#define UPPER 150
#define STEP  10

main() {
    float fahr, celsius;
    celsius = LOWER;
    while(celsius <= UPPER) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += STEP;
    }
}