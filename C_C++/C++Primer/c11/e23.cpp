#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::map; using std::vector; using std::string;
using std::multimap;

void print(const multimap<string, string>& family) {
    for(auto& f : family) {
        cout << f.first << ": " << f.second << endl;
    }
}

int main() {
    multimap<string, string> family;
    family.insert({"ren", "xin"});
    family.insert({"ren", "xin"});
    family.insert({"ren", "yu"});
    family.insert({"yang", "ya ling"});
    family.insert({"yang", "ya biao"});
    family.insert({"xiao", "tang tang"});
    family.insert({"xiao", "fan fan"});
    family.insert({"xiao", "pao pao"});

    print(family);
    return 0;
}