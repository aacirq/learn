#include <iostream>

int main() {
    std::cout << "Enter 2 numbers: " << std::endl;
    int val1, val2;
    std::cin >> val1 >> val2;
    int tmp;
    if(val1 > val2) {
        tmp = val1;
        val2 = val2;
        val2 = tmp;
    }
    while(val1 <= val2) std::cout << val1++ << std::endl;
    return 0;
}