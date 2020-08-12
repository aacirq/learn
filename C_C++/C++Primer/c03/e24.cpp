#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> ivec;
    int i;
    while(cin >> i) {
        ivec.push_back(i);
    }

    auto beg = ivec.begin(), end = ivec.end();
    cout << *beg << endl;
    for(int pre = *beg++; beg != end; pre = *beg++) {
        cout << *beg << '\t' << pre * *beg << endl;
    }


    cout << endl << endl;
    for(auto beg = ivec.begin(), end = ivec.end() - 1; beg < end; ++beg, --end) {
        cout << *beg * *end << endl;
    }
    return 0;
}