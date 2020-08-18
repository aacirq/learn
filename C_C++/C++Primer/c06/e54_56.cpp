#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int sum(int i1, int i2) {
    return i1 + i2;
}

int minus(int i1, int i2) {
    return i1 - i2;
}

int prod(int i1, int i2) {
    return i1 * i2;
}

int divide(int i1, int i2) {
    return i1 / i2;
}

int main() {
    vector<decltype(sum) *> fVec{sum, minus, prod, divide};
    for(auto f : fVec) cout << f(5, 2) << endl;
    return 0;
}