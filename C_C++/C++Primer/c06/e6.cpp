#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int abs(int val) {
    static int cnt = 0;
    ++cnt;
    cout << "This function has been called " << cnt << " times." << endl;
    int res;
    if(val < 0) res = -val;
    else        res =  val;
    return val;
}

int main() {
    int val;
    while(cin >> val) {
        cout << "res: " << abs(val) << endl;
    }
    return 0;
}