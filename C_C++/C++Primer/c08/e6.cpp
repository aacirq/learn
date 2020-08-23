#include <iostream>
#include <fstream>

#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char *argv[]) {
    if(argc < 2) cerr << "No file name?!" << endl;
    std::ifstream ifs(argv[1]);
    if(ifs) {
        Sales_data total;
        if(read(ifs, total)) {
            Sales_data trans;
            while(read(ifs, trans)) {
                if(trans.isbn() == total.isbn()) {
                    total.combine(trans);
                } else {
                    print(cout, total) << endl;
                    total = trans;
                }
            }
            print(cout, total) << endl;
        } else {
            cerr << "No data?!" << endl;
            return -1;
        }
    } else {
        cerr << "Invalid file name!" << endl;
        return -1;
    }
    return 0;
}