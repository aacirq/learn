#include <iostream>

#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main() {
    Sales_data total(cin);
    if(!total.isbn().empty()) {
        std::istream &is = cin;
        while(is) {
            Sales_data trans(is);
            if(trans.isbn() == total.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
    } else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}