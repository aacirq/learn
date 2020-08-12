#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) svec.push_back(str);
    for(auto s: svec) cout << s << " ";
    cout << endl;
    return 0;
}