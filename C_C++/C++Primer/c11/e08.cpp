#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::find;

void add_word(vector<string>& vec, const string& word) {
    if(find(vec.begin(), vec.end(), word) == vec.end()) vec.push_back(word);
}

vector<string> make_vec() {
    vector<string> vec;
    string word;
    while(cin >> word) {
        add_word(vec, word);
    }
    return vec;
}

void print(const vector<string>& vec) {
    for(const auto& s : vec) cout << s << " || ";
    cout << endl;
}

int main() {
    vector<string> word_vec = make_vec();
    print(word_vec);
    return 0;
}