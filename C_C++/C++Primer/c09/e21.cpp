#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::cin; using std::endl;
using std::vector; using std::string;

int main() {
    vector<string> strv;
    auto iter = strv.begin();
    string word;
    while(cin >> word) iter = strv.insert(iter, word);
    return 0;
}