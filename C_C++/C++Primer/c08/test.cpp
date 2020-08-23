#include <iostream>
#include <fstream>

int main() {
    std::ofstream ofs("infile", std::ofstream::ate);
    return 0;
}