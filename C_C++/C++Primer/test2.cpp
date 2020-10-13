#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <unordered_set>
#include <set>
#include <map>

using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};

class Solution {
public:
    string LeftRotateString(string str, int n) {
        if(str.empty()) return str;
        n %= str.size();
        if(!n) return str;
        string ret(str.size(), ' ');
        auto ret_it = ret.begin();
        auto beg = str.begin();
        ret_it = copy(beg + n, str.end(), ret_it);
        copy(beg, beg + n, ret_it);
        return ret;
    }
};

int main() {
    Solution s;
    for(int i = 0; i < 15; ++i) {
        cout << i << ": " << s.LeftRotateString("abcXYZdef", i) << endl;
    }

    return 0;
}