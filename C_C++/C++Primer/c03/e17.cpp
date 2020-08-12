#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    string str;
    vector<string> svec;
    while(cin >> str) {
        for(auto &c: str) c = toupper(c);
        svec.push_back(str);
    }

    cout << "size: " << svec.size() << endl;
    for(auto s: svec) cout << s << endl;
    return 0;
}