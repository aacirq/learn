#include <iostream>
#include <memory>

using namespace std;

int main() {
    int ix = 1024;
    unique_ptr<int> p(&ix);
    return 0;
}