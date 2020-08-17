#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int sum = 0, val = 1;
    while(val <= 10) sum += val, ++val;
    cout << sum << endl;
    return 0;
}