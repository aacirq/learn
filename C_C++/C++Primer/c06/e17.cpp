#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

bool haveCapital(const string &str) {
    for(auto &s: str) {
        if(isupper(s)) return true;
    }
    return false;
}

void allToLower(string &str) {
    for(auto &s: str) {
        s = tolower(s);
    }
}

int main() {
    string s = "abcABCdefDEF";
    cout << haveCapital(s) << endl;
    cout << haveCapital("abcabc") << endl;

    allToLower(s);
    cout << s << endl;
    return 0;
}