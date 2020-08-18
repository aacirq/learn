#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swapPointer(int *&p1, int *&p2) {
    int *t = p1;
    p1 = p2;
    p2 = t;
}

int main() {
    int i1 = 0, i2 = 0;
    int *p1 = &i1, *p2 = &i2;
    cout << std::hex << p1 << "; " << p2 << endl;
    swapPointer(p1, p2);
    cout << std::hex << p1 << "; " << p2 << endl;
    return 0;
}