#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    unsigned ffCnt, flCnt, fiCnt;
    ffCnt = flCnt = fiCnt = 0;
    char ch;
    while(cin >> ch) {
        switch (ch) {
        case 'f':
            if(cin >> ch) {
                switch(ch) {
                    case 'f':
                        ++ffCnt;
                        break;
                    case 'l':
                        ++flCnt;
                        break;
                    case 'i':
                        ++fiCnt;
                        break;
                    default: break;
                }
            }
            break;
        default: break;
        }
    }
    cout << "ffCnt: " << ffCnt << endl
         << "flCnt: " << flCnt << endl
         << "fiCnt: " << fiCnt << endl;
    return 0;
}