#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>

using std::cin; using std::cout; using std::endl; using std::cerr;
using std::vector; using std::string; using std::list;

int main() {
    string str;
    list<string> slst;
    if(cin >> str) {
        slst.push_back(str);
        while(cin >> str) {
            slst.push_back(str);
        }
        cout << std::count(slst.cbegin(), slst.cend(), "abc") << endl;
    } else {
        cerr << "No data ?!" << endl;
    }

    return 0;
}