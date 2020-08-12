#include <iostream>
#include <cstring>

int main() {
    char a[] = "hello, ";
    char b[] = "world.";
    char c[20] = {};
    std::strcpy(c, a);
    std::cout << c << std::endl;
    std::strcat(c, b);
    std::cout << c << std::endl;
    return 0;
}