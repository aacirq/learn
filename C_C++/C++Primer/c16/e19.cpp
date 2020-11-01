#include <iostream>
#include <vector>

using std::cout; using std::endl;
using std::vector;

template <typename T>
void
print(std::ostream& os, const T& t) {
    for( auto beg = t.begin(), end = t.end(); beg != end ; ++beg ) {
        os << *beg << " ";
    }
}

int main() {
    vector<int> vec = {1, 3, 5, 4, 2};
    print(cout, vec);
    cout << endl;
    return 0;
}