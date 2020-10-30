#include <iostream>

#include "disc_quote.h"

using namespace std;

class Base {
public:
    Base() : mem(0) { }
protected:
    int mem;
};

class Derived : Base {
public:
    Derived(int i) : mem(i) { }
    int get_num() { return Base::mem; }
protected:
    int mem;
};

int main() {
    Derived d(42);
    cout << d.get_num() << endl;
    return 0;
}