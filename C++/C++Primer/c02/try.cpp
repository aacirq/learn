#include <iostream>

int main() {
    int i = 42;
    int &r1 = i;
    const int & r2 = i;
    r1 = 0;
    std::cout << r2 << std::endl;
    return 0;
}