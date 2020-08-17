#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int i;
    while(cin >> i && i != 42) {
        cout << i << endl;
    }
    cout << "get 42" << endl;
    return 0;
}