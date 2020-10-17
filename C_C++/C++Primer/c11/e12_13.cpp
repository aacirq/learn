#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string; using std::pair;

int main() {
    vector<pair<string, int>> pvec;
    string word;
    int i;
    while(cin >> word >> i) {
        pvec.push_back({word, i});
        // pvec.push_back(pair<string, int>(word, i));
        // pvec.push_back(std::make_pair(word, i));
    }

    for(const auto& p : pvec) {
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}