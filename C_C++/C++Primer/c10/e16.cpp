#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::sort; using std::stable_sort; using std::find_if; using std::for_each;

string make_plural(size_t ctr, const string &word, const string &ending) {
    return (ctr > 1) ? word + ending : word;
}

void elimDups(vector<string> &svec) {
    sort(svec.begin(), svec.end());
    // printVec(svec);
    auto end_unique = unique(svec.begin(), svec.end());
    // printVec(svec);
    svec.erase(end_unique, svec.end());
    // printVec(svec);
}

void biggies(vector<string> &words, vector<string>::size_type sz) {
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &a, const string &b) { return a.size() < b.size(); });
    auto wc = find_if(words.begin(), words.end(), [sz](const string &s) { return s.size() >= sz; });
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length " << sz << " or longer" << endl;
    for_each(wc, words.end(), [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main() {
    vector<string> words = {"abc", "abcd", "abcde", "abcdef", "abcde", "abcd", "abc"};
    biggies(words, 5);
    return 0;
}