#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    deque<string> strd;
    string str;
    while(cin >> str) {
        strd.push_back(str);
    }
    for(auto itr = strd.cbegin(); itr != strd.cend(); ++itr) {
        cout << *itr << endl;
    }
    return 0;
}