#include <iostream>
#include <list>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::list;
using std::find;

int main() {
    list<int> lst = {1, 2, 0, 3, 4, 0, 5, 6, 7, 0, 8, 9};
    auto it = find(lst.rbegin(), lst.rend(), 0);
    cout << *++it << endl;
    return 0;
}