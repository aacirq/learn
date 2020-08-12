#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    int (*a)[10];
    int *b[10];
    for(size_t i = 0; i != 10; ++i) {
        a[0][i] = i;
        *(*a + i) = i;
        *(*b + i) = i;
    }
    cout << endl;
    return 0;
}