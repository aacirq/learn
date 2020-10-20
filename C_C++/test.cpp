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
    int MoreThanHalfNum_Solution(vector<int>& numbers) {
        unordered_map<int, int> m;
        int thres = numbers.size() / 2;
        for(auto i : numbers) {
            ++m[i];
            if(m[i] > thres) return i;
        }
        return 0;
    }
};

int main() {
    Solution s;

    // ListNode* node11 = new ListNode(1);
    // ListNode* node12 = new ListNode(3);
    // ListNode* node13 = new ListNode(5);
    // ListNode* node14 = new ListNode(7);
    // ListNode* node15 = new ListNode(9);
    // ListNode* node16 = new ListNode(10);
    
    // ListNode* node21 = new ListNode(2);
    // ListNode* node22 = new ListNode(3);
    // ListNode* node23 = new ListNode(4);
    // ListNode* node24 = new ListNode(6);
    
    // node11->next = node12;
    // node12->next = node13;
    // node13->next = node14;
    // node14->next = node15;
    // node15->next = node16;

    // node21->next = node22;
    // node22->next = node23;
    // node23->next = node24;

    vector<int> ivec = {1,2,3,2,4,2,5,2,3};
    // vector<int> ivec2 = {-2, -8, -1, -5, -9};
    cout << s.MoreThanHalfNum_Solution(ivec) << endl;

    return 0;
}