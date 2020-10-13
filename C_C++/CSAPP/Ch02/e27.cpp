#include <iostream>

using namespace std;

int uadd_ok(unsigned x, unsigned y) {
    unsigned sum = x + y;
    return sum >= x;
}

int tadd_ok(int x, int y) {
    int sum = x + y;
    if((x < 0 && y < 0 && sum >= 0) || (x > 0 && y > 0 && sum <= 0)) return false;
    return true;
}

int tsub_ok(int x, int y) {
    if(y == INT32_MIN) {
        return x < 0;
    }
    return tadd_ok(x, -y);
}