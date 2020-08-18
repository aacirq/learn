#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int compare(int n, const int *p) {
    if(n > *p) return n;
    else       return *p;
}

int main() {
    int i1, i2;
    int *p;
    while(cin >> i1 >> i2) {
        p = &i2;
        cout << "Bigger: " << compare(i1, p) << endl;
    }
    return 0;
}