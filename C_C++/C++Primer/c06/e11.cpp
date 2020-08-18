#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &val) {
    val = 0;
}

int main() {
    int i = 12;
    cout << i << " -> ";
    reset(i);
    cout << i << endl;
    return 0;
}