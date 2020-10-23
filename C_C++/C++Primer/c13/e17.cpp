#ifndef __NUMBERED_H
#define __NUMBERED_H

class numbered {
public:
    friend void f(const numbered& s);
    numbered() : mysn(count++) { }
    numbered(const numbered& n) : mysn(count++) { }
    numbered& operator=(const numbered& n) { mysn = n.mysn; }
// private:
    static int count;
    int mysn;
};

int numbered::count = 0;

#endif

#include <iostream>

using namespace std;

void f(const numbered& s) { cout << s.mysn << endl; }

int main() {
    numbered a, b = a, c = b;
    cout << a.mysn << b.mysn << c.mysn << endl;
    f(a);
    f(b);
    f(c);
    return 0;
}