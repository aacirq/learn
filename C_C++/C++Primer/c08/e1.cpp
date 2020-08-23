#include <iostream>
#include <string>

using std::istream;
using std::string;
using std::cout;
using std::cin;
using std::endl;

istream &process_input(std::istream &is) {
    std::string str;
    while(is >> str) {
        std::cout << str << std::endl;
    }
    is.clear();
    return is;
}

int main() {
    process_input(cin);
    cout << cin.rdstate() << endl;
    return 0;
}