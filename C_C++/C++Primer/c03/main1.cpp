#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

int main() {
    int a[] = {1, 2, 3, 4 ,5};
    int (&b)[5] = a;

    return 0;
}