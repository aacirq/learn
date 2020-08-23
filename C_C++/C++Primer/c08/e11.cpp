#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

struct PersonInfo {
    std::string name;
    std::vector<std::string> phones;
};

int main() {
    std::string line, word;
    std::vector<PersonInfo> people;
    std::istringstream record;
    while(getline(std::cin, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for(auto &info : people) {
        std::cout << info.name << " ";
        for(auto &p : info.phones) {
            std::cout << p << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}