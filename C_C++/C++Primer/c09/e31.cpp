#include <iostream>
#include <list>
#include <forward_list>

void delete_even(std::list<int> &lst) {
    auto iter = lst.begin();
    while(iter != lst.end()) {
        if(*iter % 2) {
            iter = lst.insert(iter, *iter);
            ++iter; ++iter;
        } else {
            iter = lst.erase(iter);
        }
    }
}

void delete_even(std::forward_list<int> &flst) {
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while(curr != flst.end()) {
        if(*curr % 2) {
            ++(curr = flst.insert_after(prev, *curr));
            prev = curr++;
        } else {
            curr = flst.erase_after(prev);
        }
    }
}

int main() {
    std::list<int> lst = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::forward_list<int> flst = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    delete_even(lst);
    for(const auto i : lst) std::cout << i << " ";
    std::cout << std::endl;
    delete_even(flst);
    for(const auto i : flst) std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}