#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>

#include "Sales_item.h"

using std::cin; using std::cout; using std::endl;
using std::vector;
using std::sort; using std::find_if; using std::accumulate;
using std::istream_iterator; using std::ostream_iterator;

int main() {
    vector<Sales_item> vec;
    istream_iterator<Sales_item> item_it(cin), eof;
    ostream_iterator<Sales_item> out_it(cout, "\n");
    while(item_it != eof) {
        vec.push_back(*item_it++);
    }
    sort(vec.begin(), vec.end(), compareIsbn);
    for(auto beg = vec.cbegin(), end = beg; beg != vec.cend(); beg = end) {
        end = find_if(beg, vec.cend(), [beg](const Sales_item &s) { return s.isbn() != beg->isbn(); });
        out_it = accumulate(beg, end, Sales_item(beg->isbn()));
    }
    return 0;
}