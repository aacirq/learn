#include <iostream>

int main() {
    int i = 0, &r = i;
    const int ci = i, &cr = ci;
    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    a = 42; b = 42; c = 42;
    // 下面三个有错
    // d = 42; e = 42; g = 42;

    return 0;
}