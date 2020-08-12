#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str, str1, str2;
    cin >> str;
    str1 = str2 = str;
    cout << "Origin string: " << str << endl;
    for(decltype(str1.size()) index = 0; index < str1.size(); ++index) {
        str1[index] = 'X';
    }
    cout << "(for)Changed string: " << str1 << endl;

    decltype(str2.size()) index = 0;
    while(index < str2.size()) {
        str2[index++] = 'X';
    }
    cout << "(while)Changed string: " << str2 << endl;
    return 0;
}