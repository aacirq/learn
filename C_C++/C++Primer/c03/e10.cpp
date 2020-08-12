#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string str, res_str;
    cin >> str;
    cout << "Origin string: " << str << endl;
    for(auto c: str) {
        if(!ispunct(c)) {
            res_str += c;
        }
    }
    cout << "Result string: " << res_str << endl;
    return 0;
}