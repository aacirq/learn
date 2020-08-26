#include <iostream>
#include <string>
#include <forward_list>

using std::cout; using std::endl;
using std::string; using std::forward_list;

void fun(std::forward_list<std::string> &lst, const string &str1, const string &str2) {
    auto pre = lst.before_begin();
    auto iter = lst.begin();
    while(iter != lst.end()) {
        if(*iter == str1) {
            lst.insert_after(iter, str2);
            return;
        } else {
            ++pre;
            ++iter;
        }
    }
    lst.insert_after(pre, str2);
}

int main() {
    return 0;
}