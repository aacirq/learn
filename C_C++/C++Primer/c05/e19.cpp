#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str1, str2;
    string rsp;
    do {
        cout << "Enter two string (separated by space): ";
        cin >> str1 >> str2;
        if(str1.size() != str2.size()) {
            cout << "The shorter string is: ";
            if(str1.size() < str2.size()) cout << str1 << endl;
            else                          cout << str2 << endl;
        } else {
            cout << "Length of two string is equal." << endl;
        }
        cout << "Continue (yes or no): ";
        cin >> rsp;
    }while(!rsp.empty() && rsp[0] != 'n');
    return 0;
}