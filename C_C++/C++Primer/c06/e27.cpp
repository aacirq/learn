#include <iostream>
#include <initializer_list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int sum(initializer_list<int> ilst) {
    int sum = 0;
    for(auto i : ilst) sum += i;
    return sum;
}

int main() {
    cout << sum({1, 2, 3, 4, 5, 6}) << endl;
    cout << sum({1, 2, 3}) << endl;
    return 0;
}