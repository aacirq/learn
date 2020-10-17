#include <iostream>
#include <string>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>

using namespace std;

map<string, size_t> count(const set<string>& exclude) {
    map<string, size_t> counter;
    string word;
    while(cin >> word)
        if(exclude.find(word) == exclude.end())
            ++counter[word];
    return counter;
}

void print(const map<string, size_t>& m) {
    for(const auto& s : m)
        cout << s.first << ": " << s.second << endl;
}

int main() {
    set<string> exclude = { "the", "but", "and", "or", "an", "a" };
    map<string, size_t> word_counter = count(exclude);
    print(word_counter);
    return 0;
}