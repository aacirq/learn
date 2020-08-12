#include <iostream>

using std::cout;
using std::endl;

int main() {
    constexpr size_t size = 10;
    int arr[size] = {};
    for(size_t i = 0; i != size; ++i) arr[i] = i;

    for(auto a: arr) cout << a << " ";
    cout << endl;
    return 0;
}