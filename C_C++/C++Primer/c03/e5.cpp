#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str1, str2;
    string tmp_str;
    if(cin >> tmp_str) {
        str2 = str1 = tmp_str;
        while(cin >> tmp_str) {
            str1 += tmp_str;
            str2 += " " + tmp_str;
        }
    }
    cout << str1 << endl
         << str2 << endl;
    return 0;
}