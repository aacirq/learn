#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void fun(int i = 1);

int main() {
    fun(2);
    fun(5);
    fun();
    void fun(int i = 3);
    fun();
    return 0;
}

void fun(int i) {
    cout << i << endl;
}