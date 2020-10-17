#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::map; using std::vector; using std::string;

void add_name(map<string, vector<string>>& family, const string& first, const string& last) {
    family[first].push_back(last);
}

void print(const map<string, vector<string>>& family) {
    for(auto& f : family) {
        cout << f.first << ": ";
        for(auto& s : f.second) cout << s << ", ";
        cout << endl;
    }
}

int main() {
    map<string, vector<string>> family;
    add_name(family, "ren", "xin");
    add_name(family, "ren", "yu");
    add_name(family, "yang", "ya ling");
    add_name(family, "yang", "ya biao");
    add_name(family, "xiao", "tang tang");
    add_name(family, "xiao", "fan fan");
    add_name(family, "xiao", "pao pao");

    print(family);
    return 0;
}