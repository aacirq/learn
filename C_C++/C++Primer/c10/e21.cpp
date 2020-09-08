#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
    int i = 10;
    auto f = [=]() mutable -> bool { while(i > 0) --i; return i == 0; };
    cout << f() << endl;
    return 0;
}