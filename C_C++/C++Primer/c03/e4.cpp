#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str1, str2;
    cin >> str1 >> str2;
    if(str1 > str2) {
        cout << str1 << endl;
    } else if(str2 > str1) {
        cout << str2 << endl;
    } else {
        cout << "(value ==)" << endl;
    }

    string::size_type s1 = str1.size(), s2 = str2.size();
    if(s1 > s2) {
        cout << str1 << ": " << s1 << endl;
    } else if(s2 > s1) {
        cout << str2 << ": " << s2 << endl;
    } else {
        cout << "(size ==)" << endl;
    }
    return 0;
}