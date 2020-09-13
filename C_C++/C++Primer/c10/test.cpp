#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>

#include "Sales_item.h"

using std::cin; using std::cout; using std::endl;
using std::istream_iterator; using std::ostream_iterator;
using std::vector; using std::accumulate;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto it = vec.begin();
    cout << vec[3] << endl;
    return 0;
}