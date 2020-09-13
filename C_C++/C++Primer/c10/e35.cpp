#include <iostream>
#include <iterator>
#include <vector>

using std::cin; using std::cout; using std::endl;
using std::vector;

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    if(!ivec.empty()) {
        auto it = ivec.end();
        do {
            --it;
            cout << *it << " ";
        } while(it != ivec.begin());
    }
    cout << endl;
    return 0;
}