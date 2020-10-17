#include <iostream>
#include <map>
#include <set>
#include <list>
#include <string>

#include "Sales_data.h"

using std::cin; using std::cout; using std::endl;
using std::string; using std::list; using std::map;
using std::multiset;

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs) {
    return lhs.isbn() < rhs.isbn();
}

int main() {
    // Exercise 11.9
    map<string, list<unsigned>> word_map;

    // Exercise 11.11
    using fun = bool (*)(const Sales_data&, const Sales_data&);
    multiset<string, fun> bookstore(compareIsbn);

    return 0;
}