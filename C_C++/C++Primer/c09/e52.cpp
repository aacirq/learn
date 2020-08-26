#include <iostream>
#include <stack>
#include <string>

using std::cout; using std::endl;
using std::stack; using std::string;

int main() {
    string epr = "This is (pezy).";
    stack<char> stk;
    bool bSeen = false;
    for(const auto &s : epr) {
        if(s == '(')      { bSeen = true; continue; }
        else if(s == ')') { bSeen = false; }
        if(bSeen) { stk.push(s); }
    }

    string repStr;
    while(!stk.empty()) {
        repStr = stk.top() + repStr;
        stk.pop();
    }

    auto fp = epr.find('('), lp = epr.find(')');
    epr.replace(fp, lp - fp + 1, repStr);

    cout << epr << endl;
    return 0;
}