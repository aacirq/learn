#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

int main(int argc, char *argv[]) {
    std::ifstream ifstm(argv[1]);
    std::string line;
    std::vector<std::string> svec;
    while(getline(ifstm, line)) {
        svec.push_back(line);
    }
    for(auto &s : svec) {
        std::istringstream isstm(s);
        std::string word;
        while(isstm >> word) {
            std::cout << word << std::endl;
        }
        std::cout << std::endl;
    }
    
    return 0;
}