#include <iostream>
#include <vector>
#include <iterator>

using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    vector<int> ivec(std::begin(a), std::end(a));
    int b[6];

    for(size_t i = 0; i != 6; ++i) {
        b[i] = ivec[i];
    }

    for(int i: b) cout << i << endl;

    return 0;
}