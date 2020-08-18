#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int &p1, int &p2) {
    int t = p1;
    p1    = p2;
    p2    = t;
}

int main() {
    int val1, val2;
    while(cin >> val1 >> val2) {
        cout << "origin: " << val1 << ", " << val2 << endl;
        swap(val1, val2);
        cout << "swapped: " << val1 << ", " << val2 << endl;
    }
    return 0;
}