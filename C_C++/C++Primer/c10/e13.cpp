#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string; using std::partition;

bool moreThan5(const string &s) {
    return s.size() >= 5;
}

int main() {
    vector<string> words = {"abc", "abcd", "abcde", "abcdef", "abcde", "abcd", "abc"};
    auto end_itr = partition(words.begin(), words.end(), moreThan5);
    for(auto itr = words.cbegin(); itr != end_itr; ++itr) {
        cout << *itr << endl;
    }
    return 0;
}