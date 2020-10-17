#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <list>
#include <stack>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

static const auto io_sync_off = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int GetUglyNumber_Solution(int index) {
        vector<int> vec(index);
        vec[0] = 1;
        size_t ind2 = 0, ind3 = 0, ind5 = 0;
        for(size_t ind_vec = 1; ind_vec < index; ++ind_vec) {
            do {
                int num2 = vec[ind2] * 2;
                int num3 = vec[ind3] * 3;
                int num5 = vec[ind5] * 5;
                int this_num;
                if(num2 < num3) {
                    if(num2 < num5) { this_num = num2; ++ind2; }
                    else            { this_num = num5; ++ind5; }
                }
                else {
                    if(num3 < num5) { this_num = num3; ++ind3; }
                    else            { this_num = num5; ++ind5; }
                }
                vec[ind_vec] = this_num;
            } while(vec[ind_vec] == vec[ind_vec - 1]);
        }
        return vec[index - 1];
    }
};

int main() {
    Solution s;
    for(int i = 1; i < 100; ++i) {
        cout << s.GetUglyNumber_Solution(i) << endl;
    }

    return 0;
}