#include <iostream>
#include <list>
#include <vector>
#include <string>

int main() {
    std::list<const char *> clist = {"a", "abc", "12345"};
    std::vector<std::string> svec;
    svec.assign(clist.begin(), clist.end());
    for(auto str : svec) std::cout << str << std::endl;
    return 0;
}