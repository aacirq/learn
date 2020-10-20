#include <iostream>
#include <string>

using namespace std;

int main() {
    char* str = new char[10];
    size_t sz = 10;
    size_t ind = 0;
    char c;
    while(cin >> c) {
        if(ind >= sz) {
            str = (char*)realloc(str, 2 * sz);
            sz *= 2;
        }
        str[ind++] = c;
    }
    if(ind >= sz) {
        str = (char*)realloc(str, 2 * sz);
        sz *= 2;
    }
    str[ind] = '\0';
    cout << str << "|" << endl;

    return 0;
}