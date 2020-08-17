#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    for(int &i: vec) {
        i = i % 2 ? i * 2 : i;
    }

    for(int i: vec) cout << i << endl;
    return 0;
}