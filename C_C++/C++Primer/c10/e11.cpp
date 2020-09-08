#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::sort; using std::unique; using std::stable_sort;

void printVec(vector<string> &svec) {
    for(auto &s : svec) {
        cout << s << " ";
    }
    cout << endl;
}

void elimDups(vector<string> &svec) {
    sort(svec.begin(), svec.end());
    // printVec(svec);
    auto end_unique = unique(svec.begin(), svec.end());
    // printVec(svec);
    svec.erase(end_unique, svec.end());
    // printVec(svec);
}

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<string> svec;
    string str;
    while(cin >> str) {
        svec.push_back(str);
    }
    elimDups(svec);

    stable_sort(svec.begin(), svec.end(), isShorter);
    printVec(svec);
    return 0;
}