#include <iostream>

using std::cin; using std::cout; using std::endl;

int fun(int i) {
    auto f = [i](int i2) { return i + i2; };
    return f(2);
}

int main() {
    auto f = [](int i1, int i2) { return i1 + i2; };
    cout << fun(3) << endl;
    cout << fun(5) << endl;
    return 0;
}