#include <iostream>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::string;

int main() {
    string letters = "acemnorsuvwxz";
    string str;
    while(cin >> str) {
        string::size_type pos = str.find_first_not_of(letters);
        cout << str.substr(0, pos) << endl;
    }
    return 0;
}