#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string str, maxStr;
    unsigned cnt = 1, maxCnt = 1;
    if(cin >> str) {
        string curStr;
        while(cin >> curStr) {
            if(curStr == str) ++cnt;
            else {
                if(cnt > maxCnt) {
                    maxStr = str;
                    maxCnt = cnt;
                }
                cnt = 1;
                str = curStr;
            }
        }
    }
    cout << maxStr << " occurs " << maxCnt << " times." << endl;
    return 0;
}