#include <iostream>
#include <string>

void fun(std::string &s, const std::string &oldVal, const std::string &newVal) {
    for(std::string::size_type ind = 0; ind != s.size(); ++ind) {
        if(s.substr(ind, oldVal.size()) == oldVal) {
            s.replace(ind, oldVal.size(), newVal);
            ind += oldVal.size() - 1;
        }
    }
}

int main() {
    std::string str1 = "tho djgka thogjdakl";
    fun(str1, "tho", "though");
    std::cout << str1 << std::endl;
    return 0;
}