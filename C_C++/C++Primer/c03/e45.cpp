#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
    int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    // version 1: range-for
    cout << "version 1:" << endl;
    for(auto &p: ia) {
        for(auto q: p) {
            cout << q << " ";
        }
    }
    cout << endl;

    // version 2: for, subscript
    cout << "version 2:" << endl;
    for(size_t r = 0; r != 3; ++r) {
        for(size_t c = 0; c != 4; ++c) {
            cout << ia[r][c] << " ";
        }
    }
    cout << endl;

    // version 3: for, pointer
    cout << "version 3:" << endl;
    for(auto rb= begin(ia), re = end(ia); rb != re; ++rb) {
        for(auto *cb = begin(*rb), *ce = end(*rb); cb != ce; ++cb) {
            cout << *cb << " ";
        }
    }
    cout << endl;

    return 0;
}