#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned aCnt, eCnt, iCnt, oCnt, uCnt;
    aCnt = eCnt = iCnt = oCnt = uCnt = 0;
    char ch;
    while(cin >> ch) {
        switch (ch)
        {
        case 'a': case 'A':
            ++aCnt;
            break;
        case 'e': case 'E':
            ++eCnt;
            break;
        case 'i': case 'I':
            ++iCnt;
            break;
        case 'o': case 'O':
            ++oCnt;
            break;
        case 'u': case 'U':
            ++uCnt;
            break;
        default:
            break;
        }
    }
    cout << "aCnt: " << aCnt << endl
         << "eCnt: " << eCnt << endl
         << "iCnt: " << iCnt << endl
         << "oCnt: " << oCnt << endl
         << "uCnt: " << uCnt << endl;
    return 0;
}