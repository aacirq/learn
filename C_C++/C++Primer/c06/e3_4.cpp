#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val) {
    int res = 1;
    while(val > 1) res *= val--;
    return res;
}

int main() {
    int val;
    while(cin >> val) {
        cout << "res: " << fact(val) << endl;
    }
    return 0;
}