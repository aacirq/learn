#include <stdio.h>

float f2c(float f);

int main(void) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Temperature transformation\n");
    while(fahr <= upper) {
        printf("\t%3.0f %6.1f\n", fahr, f2c(fahr));
        fahr += step;
    }
}

float f2c(float f) {
    return (5.0 / 9.0) * (f - 32.0);
}