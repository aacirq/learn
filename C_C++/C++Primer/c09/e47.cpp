#include <iostream>
#include <string>

using std::cout; using std::endl;
using std::string;

int main() {
    string str = "ab2c3d7R4E6";
    string::size_type pos = 0;
    while((pos = str.find_first_of("0123456789", pos)) != string::npos) {
        cout << str[pos] << " ";
        ++pos;
    }
    cout << endl;
    pos = 0;
    while((pos = str.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", pos)) != string::npos) {
        cout << str[pos] << " ";
        ++pos;
    }
    cout << endl;

    cout << endl;
    pos = 0;
    while((pos = str.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", pos)) != string::npos) {
        cout << str[pos] << " ";
        ++pos;
    }
    cout << endl;
    pos = 0;
    while((pos = str.find_first_not_of("0123456789", pos)) != string::npos) {
        cout << str[pos] << " ";
        ++pos;
    }
    cout << endl;

    return 0;
}