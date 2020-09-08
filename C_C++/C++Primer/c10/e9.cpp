#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::sort; using std::unique;

void printVec(vector<string> &svec) {
    for(auto &s : svec) {
        cout << " | " << s << " ";
    }
    cout << endl;
}

void elimDups(vector<string> &svec) {
    sort(svec.begin(), svec.end());
    printVec(svec);
    auto end_unique = unique(svec.begin(), svec.end());
    printVec(svec);
    svec.erase(end_unique, svec.end());
    printVec(svec);
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) {
        svec.push_back(str);
    }
    elimDups(svec);
    return 0;
}