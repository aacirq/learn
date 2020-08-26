#include <iostream>
#include <list>
#include <deque>

using std::cout;
using std::endl;
using std::deque;
using std::list;

int main() {
    list<int> ilst = {1, 3, 56, 3, 6, 23, 89, 90, 123, 34, 23};
    deque<int> odd, even;
    for(const auto i : ilst) {
        if(i % 2) odd.push_back(i);
        else      even.push_back(i);
    }
    cout << "odd" << endl;
    for(const auto i : odd) cout << i << " ";
    cout << endl;
    cout << "even" << endl;
    for(const auto i : even) cout << i << " ";
    cout << endl;
    return 0;
}