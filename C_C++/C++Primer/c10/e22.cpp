#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::count_if;
using std::bind;
using namespace std::placeholders;

bool longerThan(string s, string::size_type len) { return s.size() > len; }

int main() {
    vector<string> svec = {"abcd", "abcde", "abcdef", "abcdefg", "abcdefgh", "abcdefg", "abcdef", "abcde", "abcd"};
    cout << count_if(svec.begin(), svec.end(), bind(longerThan, _1, 6)) << endl;
    return 0;
}