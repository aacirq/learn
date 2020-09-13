#include <iostream>
#include <list>
#include <string>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::list; using std::string;
using std::sort; using std::unique;

void elimpDups(list<string> &words) {
    words.sort();
    words.unique();
}

int main() {
    list<string> words = {"123", "1234", "123", "1234", "123", "1234", "123", "1234"};
    elimpDups(words);
    for(auto &w : words) {
        cout << w << endl;
    }
    return 0;
}