#include <iostream>
#include <vector>

using std::cout;
using std::vector;
using std::endl;

void print_vector(const vector<int>::iterator beg, const vector<int>::iterator end) {
    if(beg == end) return;
    cout << *beg << endl;
    print_vector(beg + 1, end);
}

int main() {
    vector<int> ivec{1, 2, 3, 4, 5};
    print_vector(ivec.begin(), ivec.end());
    return 0;
}