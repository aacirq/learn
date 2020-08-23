#include <iostream>
#include <sstream>

std::istream &process_input(std::istream &is) {
    std::string str;
    while(is >> str) {
        std::cout << str << std::endl;
    }
    is.clear();
    return is;
}

int main() {
    std::istringstream isstm("abcadjgk jadklg gjdkla");
    process_input(isstm);
    return 0;
}