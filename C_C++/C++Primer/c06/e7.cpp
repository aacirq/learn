#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fun() {
    static int cnt = 0;
    return ++cnt;
}

int main() {
    int val;
    while(cin >> val) {
        cout << fun() << endl;
    }
    return 0;
}