#include <iostream>
#include <string>

std::string &fun(std::string &s, const std::string &prefix, const std::string &postfix) {
    auto iter = s.begin();
    std::string pre = prefix + " ";
    s.insert(iter, pre.begin(), pre.end());
    s.append(" " + postfix);
    return s;
}

int main() {
    std::string str = "Tom";
    fun(str, "Mr.", "III");
    std::cout << str << std::endl;
    return 0;
}