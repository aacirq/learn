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

    for(auto i: ivec) cout << i << endl;
    return 0;
}