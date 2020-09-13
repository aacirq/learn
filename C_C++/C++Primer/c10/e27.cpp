#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::unique_copy; using std::back_inserter;

int main() {
    vector<int> ivec = {1, 2, 3, 3, 4, 5, 5, 6, 7, 7, 8};
    vector<int> dst;
    unique_copy(ivec.begin(), ivec.end(), back_inserter(dst));
    for(auto i : ivec) {
        cout << i << " ";
    }
    cout << endl;
    for(auto i : dst) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}