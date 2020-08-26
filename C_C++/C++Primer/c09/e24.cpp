#include <iostream>
#include <vector>

void fun(std::vector<int> ivec) {
    ivec[0];
    ivec.front();
    *ivec.begin();
    ivec.at(0);
}

int main() {
    std::vector<int> ivec;
    fun(ivec);
    return 0;
}