#include <iostream>
#include <vector>
#include <list>
#include <iterator>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::list;
using std::back_inserter; using std::front_inserter; using std::inserter;
using std::copy;

int main() {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> dst1, dst3;
    list<int> dst2;
    copy(ivec.begin(), ivec.end(), back_inserter(dst1));
    copy(ivec.begin(), ivec.end(), front_inserter(dst2));
    copy(ivec.begin(), ivec.end(), inserter(dst3, dst3.end()));

    cout << "back_inserter: " << endl;
    for(auto i : dst1) cout << i << " ";
    cout << endl;

    cout << "front_inserter: " << endl;
    for(auto i : dst2) cout << i << " ";
    cout << endl;
    
    cout << "inserter: " << endl;
    for(auto i : dst3) cout << i << " ";
    cout << endl;
    return 0;
}