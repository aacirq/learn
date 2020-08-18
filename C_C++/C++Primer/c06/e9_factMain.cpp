#include <iostream>
#include "Chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int main() {
    int val;
    while(cin >> val) {
        cout << "res: " << fact(val) << endl;
    }
    return 0;
}