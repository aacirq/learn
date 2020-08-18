#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int val) {
    if(val < 0) return -val;
    else        return  val;
}

int main() {
    int val;
    while(cin >> val) {
        cout << "res: " << abs(val) << endl;
    }
    return 0;
}