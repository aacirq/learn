#include <iostream>
#include <string>

using namespace std;

char* cat(const string& str1, const string& str2) {
    size_t sz = str1.size() + str2.size();
    char* ret = new char[sz];
    int ind = 0;
    for(int i = 0; i < str1.size(); ++i, ++ind) ret[ind] = str1[i];
    for(int i = 0; i < str2.size(); ++i, ++ind) ret[ind] = str2[i];
    ret[ind] = '\0';
    return ret;
}

int main() {
    char* c = cat("abc", "123");
    cout << c << endl;
    return 0;
}