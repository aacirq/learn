#include <iostream>
#include <fstream>

#include "Sales_data.h"

using std::cin;
using std::cout;
using std::cerr;
using std::endl;

int main(int argc, char *argv[]) {
    if(argc < 2) cerr << "No file name?!" << endl;
    if(argc < 3) cerr << "No output file name?!" <<endl;
    std::ifstream ifs(argv[1]);
    std::ofstream ofs(argv[2]);
    if(ifs && ofs) {
        Sales_data total;
        if(read(ifs, total)) {
            Sales_data trans;
            while(read(ifs, trans)) {
                if(trans.isbn() == total.isbn()) {
                    total.combine(trans);
                } else {
                    print(ofs, total) << endl;
                    total = trans;
                }
            }
            print(ofs, total) << endl;
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