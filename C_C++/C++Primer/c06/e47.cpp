#include <iostream>
#include <vector>

using std::cout;
using std::cerr;
using std::vector;
using std::endl;

void print_vector(const vector<int>::iterator beg, const vector<int>::iterator end) {
    if(beg == end) return;
    if(*beg < 3) {
        #ifndef NDEBUG
            cerr << "Error: " << __FILE__
                 << " : in function " << __func__
                 << "; at line " << __LINE__ << endl;
        #else
            cout << *beg << endl;
        #endif
    } else {
        cout << *beg << endl;
    }
    print_vector(beg + 1, end);
}

int main() {
    vector<int> ivec{1, 2, 3, 4, 5};
    print_vector(ivec.begin(), ivec.end());
    return 0;
}