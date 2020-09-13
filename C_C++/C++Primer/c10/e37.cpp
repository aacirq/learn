#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::list;
using std::sort; using std::copy_if; using std::copy;
using std::back_inserter;

int main() {
    vector<int> vec = {11, 5, 3, 0, 6, 5, 2, 8, 9, 10};
    list<int> lst2;
    copy_if(vec.rbegin(), vec.rend(), back_inserter(lst2), [](int i) { return (i >= 3) && (i <= 7); });
    for(int i : lst2) cout << i << " ";
    cout << endl;
    return 0;
}