#include <iostream>
#include <vector>
#include <numeric>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::accumulate;

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7};
    cout << accumulate(ivec.cbegin(), ivec.cend(), 0) << endl;
    return 0;
}