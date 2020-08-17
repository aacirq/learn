#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char ch;
    unsigned vowelCnt = 0;
    while(cin >> ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            ++vowelCnt;
        }
    }
    cout << vowelCnt << endl;
    return 0;
}