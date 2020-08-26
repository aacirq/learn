#include <iostream>
#include <vector>
#include <list>

using std::cout; using std::endl;
using std::vector; using std::list;

int main() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
    vector<int> ivec;
    list<int> ilst;
    for(auto b = std::begin(ia); b != std::end(ia); ++b) {
        ivec.push_back(*b);
        ilst.push_back(*b);
    }
    auto itr = ivec.begin();
    while(itr != ivec.end()) {
        if(!(*itr % 2)) itr = ivec.erase(itr);
        else ++itr;
    }
    auto itrl = ilst.begin();
    while(itrl != ilst.end()) {
        if(*itrl % 2) itrl = ilst.erase(itrl);
        else ++itrl;
    }

    for(const auto i : ivec) cout << i << " ";
    cout << endl;
    for(const auto i : ilst) cout << i << " ";
    cout << endl;
    return 0;
}