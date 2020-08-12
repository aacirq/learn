#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str;
    cin >> str;
    cout << "Origin string: " << str << endl;
    for(char c : str) {
        c = 'X';
    }
    cout << "Changed string: " << str << endl;
    return 0;
}