#include <iostream>
#include <algorithm>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
    vector<int> ivec;
    int i;
    while(cin >> i) {
        ivec.push_back(i);
    }

    cout << std::count(ivec.cbegin(), ivec.cend(), 3) << endl;
    return 0;
}