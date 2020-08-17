#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> ivec1{0, 1, 2, 2};
    vector<int> ivec2{0, 1, 1, 2, 3, 5, 8};
    auto len1 = ivec1.size(), len2 = ivec2.size(), min_len = len1 < len2 ? len1 : len2;
    std::size_t ind = 0;
    while(ind < min_len && ivec1[ind] == ivec2[ind]) {
        ++ind;
    }
    if(ind == min_len) {
        cout << true << endl;
    } else {
        cout << false << endl;
    }
    return 0;
}