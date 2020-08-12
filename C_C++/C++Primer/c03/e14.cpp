#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> ivec;
    int i;
    while(cin >> i) ivec.push_back(i);
    for(auto i: ivec) cout << i << " ";
    cout << endl;
    return 0;
}