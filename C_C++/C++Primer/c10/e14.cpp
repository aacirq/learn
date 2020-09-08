#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
    auto f = [](int i1, int i2) { return i1 + i2; };
    cout << f(1, 2) << endl;
    cout << f(2, 3) << endl;
    return 0;
}