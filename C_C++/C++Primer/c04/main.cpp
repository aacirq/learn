#include <iostream>
#include <iterator>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::string;

int main() {
    int a[] = {1, 2, 3, 4, 5};
    for(int i : a) {
        cout << i << endl;
    }

    return 0;
}