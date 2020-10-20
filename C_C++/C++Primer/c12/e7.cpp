#include <iostream>
#include <vector>
#include <memory>

using namespace std;

shared_ptr<vector<int>> make_vec() {
    return make_shared<vector<int>>();
}

shared_ptr<vector<int>> read_value() {
    auto ptr = make_vec();
    int i;
    while(cin >> i) {
        ptr->push_back(i);
    }
    return ptr;
}

void print_vec() {
    auto ptr = read_value();
    for(auto i : *ptr) cout << i << " ";
    cout << endl;
}

int main() {
    print_vec();
    return 0;
}