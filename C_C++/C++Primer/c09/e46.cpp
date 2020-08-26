#include <iostream>
#include <string>

std::string &fun(std::string &s, const std::string &prefix, const std::string &postfix) {
    std::string pre = prefix + " ";
    s.insert(0, pre);
    s.insert(s.size(), " " + postfix);
    return s;
}

int main() {
    std::string str = "Tom";
    fun(str, "Mr.", "III");
    std::cout << str << std::endl;
    return 0;
}