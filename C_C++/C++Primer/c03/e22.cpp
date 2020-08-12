#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> svec = {"abc dfasjklg", "ajdklag", "", "djak"};
    for(auto it = svec.begin(); it != svec.end() && !it->empty(); ++it) {
        for(auto str_it = it->begin(); str_it != it->end(); ++str_it) {
            *str_it = toupper(*str_it);
        }
        cout << *it << endl;
    }
    return 0;
}