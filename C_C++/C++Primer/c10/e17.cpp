#include "Sales_data.h"
#include <iostream>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::sort;

bool compareIsbn(const Sales_data &s1, const Sales_data &s2) {
    return s1.isbn() < s2.isbn();
}

int main() {
    Sales_data sd;
    vector<Sales_data> vec;
    while(read(cin, sd)) {
        vec.push_back(sd);
    }
    sort(vec.begin(), vec.end(), [](const Sales_data &s1, const Sales_data &s2) { return s1.isbn() < s2.isbn(); });
    for(auto &s : vec) {
        print(cout, s) << endl;
    }
    
    return 0;
}