#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> ivec = {12, 23, 34, 45, 56, 67, 78, 89, 90, 123};
    for(auto it = ivec.begin(); it != ivec.end(); ++it) {
        *it *= 2;
    }
    for(auto it = ivec.begin(); it != ivec.end(); ++it) {
        cout << *it << endl;
    }
    return 0;
}