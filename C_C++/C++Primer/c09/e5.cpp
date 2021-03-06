#include <iostream>
#include <vector>

std::vector<int>::const_iterator fun(std::vector<int>::const_iterator beg, std::vector<int>::const_iterator end, int val) {
    while(beg != end) {
        if(val == *beg) return beg;
        ++beg;
    }
    return end;
}

int main() {
    std::vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8};
    std::cout << *fun(ivec.begin(), ivec.end(), 7) << std::endl;
    return 0;
}