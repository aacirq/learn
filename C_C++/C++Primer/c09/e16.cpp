#include <iostream>
#include <vector>
#include <list>

int main() {
    std::vector<int> ivec = {1, 2, 3, 4, 5};
    std::list<int> ilst = {1, 3, 5, 4};
    auto bvec = ivec.begin();
    auto blst = ilst.begin();
    for(; bvec != ivec.end() && blst != ilst.end(); ++bvec, ++blst) {
        std::cout << (*bvec < *blst) << std::endl;
    }
    return 0;
}