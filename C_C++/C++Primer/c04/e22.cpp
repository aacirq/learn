#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int i;
    cin >> i;
    string res;
    res = (i > 90) ? "high pass"
                   : (i > 75) ? "pass"
                                : (i >= 60) ? "low pass" : "fail";
    cout << "?: operator: " << res << endl;

    if(i > 90)       res = "high pass";
    else if(i > 75)  res = "pass";
    else if(i >= 60) res = "low pass";
    else             res = "fail";
    cout << "if-else expression: " << res << endl;
    
    return 0;
}