#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<int> ivec;
    int pre;
    if(cin >> pre) {
        ivec.push_back(pre);
        cout << pre << endl;
        int cur;
        while(cin >> cur) {
            ivec.push_back(cur);
            cout << cur << "\t" << pre + cur << endl;
            pre = cur;
        }
    }
    cout << endl << endl;
    auto len = ivec.size();
    for(decltype(ivec.size()) left = 0, right = len - 1; left <= right; ++left, --right) {
        cout << ivec[left] + ivec[right] << endl;
    }
    return 0;
}