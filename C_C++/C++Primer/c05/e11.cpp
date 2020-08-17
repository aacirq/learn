#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned aCnt, eCnt, iCnt, oCnt, uCnt, spaceCnt, tabCnt, enterCnt, otherCnt;
    aCnt = eCnt = iCnt = oCnt = uCnt = spaceCnt = tabCnt = enterCnt = otherCnt = 0;
    char ch;
    while((ch = getchar()) != EOF) {
        switch (ch) {
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
        case ' ':
            ++spaceCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++enterCnt;
            break;
        default:
            ++otherCnt;
            break;
        }
    }
    cout << "aCnt: " << aCnt << endl
         << "eCnt: " << eCnt << endl
         << "iCnt: " << iCnt << endl
         << "oCnt: " << oCnt << endl
         << "uCnt: " << uCnt << endl
         << "spaceCnt: " << spaceCnt << endl
         << "tabCnt: "   << tabCnt   << endl
         << "enterCnt: " << enterCnt << endl
         << "otherCnt: " << otherCnt << endl;
    return 0;
}