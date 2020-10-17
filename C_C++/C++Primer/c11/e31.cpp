#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<string, string> authors = { {"ren", "book1"},
                                         {"ren", "book2"},
                                         {"ren", "book3"},
                                         {"tang", "book4"},
                                         {"tang", "book5"},
                                         {"fan", "book6"},
                                         {"fan", "book7"} };
    string search_name = "ren";
    auto pos = authors.equal_range(search_name);
    if(pos.first != pos.second) {
        authors.erase(pos.first, pos.second);
    }
    for(auto beg = authors.begin(), end = authors.end(); beg != end; ++beg) {
        cout << beg->first << ", " << beg->second << endl;
    }
    return 0;
}