#include <iostream>
#include <string>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

// using namespace std;
using std::string;
using std::unordered_map;
using std::set;
using std::remove_if;
using std::cin;
using std::cout;
using std::endl;

string& strip(string& str) {
    str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
    for(auto& c : str) c = tolower(c);
    return str;
}

unordered_map<string, size_t> strip_and_count(const set<string>& exclude) {
    unordered_map<string, size_t> counter;
    string word;
    while(cin >> word) {
        strip(word);
        if(exclude.find(word) == exclude.end())
            ++counter[word];
    }
    return counter;
}

void print(const unordered_map<string, size_t>& m) {
    for(const auto& s : m)
        cout << s.first << ": " << s.second << endl;
}

int main() {
    set<string> exclude = { "the", "but", "and", "or", "an", "a" };
    unordered_map<string, size_t> word_counter = strip_and_count(exclude);
    print(word_counter);
    return 0;
}