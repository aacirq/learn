#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::istream;
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

void fun(std::string &filename, std::vector<std::string> &strv) {
    std::ifstream input(filename);
    if(input) {
        string str;
        while(input >> str) strv.push_back(str);
    }
}

int main() {
    return 0;
}