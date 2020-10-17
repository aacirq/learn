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
                                         {"fan", "book7"},
                                         {"fan", "book6"} };

    for(auto beg = authors.begin(), end = authors.end(); beg != end; ++beg) {
        cout << beg->first << ", " << beg->second << endl;
    }
    return 0;
}