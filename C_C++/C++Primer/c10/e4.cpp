#include <iostream>
#include <vector>
#include <numeric>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::accumulate;

int main() {
    vector<double> ivec = {1.9, 2.9, 3.9, 4.9};
    cout << accumulate(ivec.cbegin(), ivec.cend(), 0.) << endl;
    return 0;
}