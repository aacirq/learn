#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main() {
    string str;
    while(getline(cin, str)) {
        cout << str << endl;
    }
    return 0;
}