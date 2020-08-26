#include <iostream>
#include <string>

void fun(std::string &s, const std::string &oldVal, const std::string &newVal) {
    for(auto iter = s.begin(); iter != s.end() - oldVal.size(); ++iter) {
        if(s.substr(iter - s.begin(), oldVal.size()) == oldVal) {
            auto n = iter - s.begin();
            s.erase(n, oldVal.size());
            iter = s.insert(iter, newVal.begin(), newVal.end());
            iter += newVal.size() - 1;
        }
    }
}

int main() {
    std::string str1 = "tho djgka thogjdakl";
    fun(str1, "tho", "though");
    std::cout << str1 << std::endl;
    return 0;
}