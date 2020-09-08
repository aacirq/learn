#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;
using std::bind; using std::find_if;
using namespace std::placeholders;

bool check_size(const string &s, int sz) { return s.size() < sz; }

int main() {
    vector<int> vec = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    auto itr = find_if(vec.begin(), vec.end(), bind(check_size, string("abc"), _1));
    cout << *itr << endl;
    return 0;
}