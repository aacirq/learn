#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::map; using std::vector; using std::string; using std::pair;

void add_name(map<string, vector<pair<string, string>>>& family, const string& first, const string& last, const string& date) {
    family[first].push_back({last, date});
}

void print(const map<string, vector<pair<string, string>>>& family) {
    for(auto& f : family) {
        cout << f.first << ": ";
        for(auto& s : f.second) cout << s.first << " " << s.second << ", ";
        cout << endl;
    }
}

int main() {
    map<string, vector<pair<string, string>>> family;
    add_name(family, "ren", "xin", "1998-07-14");
    add_name(family, "ren", "yu", "1998-07-14");
    add_name(family, "yang", "ya ling", "1998-07-14");
    add_name(family, "yang", "ya biao", "1998-07-14");
    add_name(family, "xiao", "tang tang", "1998-07-14");
    add_name(family, "xiao", "fan fan", "1998-07-14");
    add_name(family, "xiao", "pao pao", "1998-07-14");

    print(family);

    map<string, size_t> word_count;
    auto map_it = word_count.begin();
    return 0;
}