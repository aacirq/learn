#include <iostream>
#include <algorithm>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::fill_n;

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 0, 7, 8, 9};
    fill_n(ivec.begin(), ivec.size(), 0);
    for(auto i : ivec) cout << i << " ";
    cout << endl;
    return 0;
}