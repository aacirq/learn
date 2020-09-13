#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::istream_iterator; using std::ostream_iterator;
using std::vector; using std::string;
using std::sort; using std::copy;

int main() {
    vector<int> ivec;
    istream_iterator<int> item_it(cin), eof;
    ostream_iterator<int> out_it(cout, " ");
    while(item_it != eof) {
        ivec.push_back(*item_it++);
    }
    sort(ivec.begin(), ivec.end());
    copy(ivec.begin(), ivec.end(), out_it);
    cout << endl;
    return 0;
}