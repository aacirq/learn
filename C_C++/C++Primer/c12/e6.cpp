#include <iostream>
#include <vector>

using namespace std;

vector<int>* make_vec() {
    return new vector<int>();
}

vector<int>* read_value() {
    vector<int>* ptr = make_vec();
    int i;
    while(cin >> i) {
        ptr->push_back(i);
    }
    return ptr;
}

void print_vec() {
    vector<int>* ptr = read_value();
    for(auto i : *ptr) cout << i << " ";
    cout << endl;
    delete ptr;
}

int main() {
    print_vec();
    return 0;
}