#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::count_if;

int main() {
    vector<string> svec = {"abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefg", "abcdef", "abcde", "abcd"};
    cout << count_if(svec.begin(), svec.end(), [](const string &s) { return s.size() > 6; }) << endl;
    return 0;
}