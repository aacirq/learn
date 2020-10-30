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
#include <set>
#include <map>

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

struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
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
    vector<vector<int>> FindPath(TreeNode* root,int expectNumber) {
        vector<vector<int>> ret;
        if(!root) return ret;
        fun(ret, vector<int>(), root, 0, expectNumber);
        sort(ret.begin(), ret.end());
        return ret;
    }

private:
    void fun(vector<vector<int>>& ret, vector<int> vec, TreeNode* node, 
             int cum, int expectNumber) {
        vec.push_back(node->val);
        if(node->left) {
            fun(ret, vec, node->left, cum + node->val, expectNumber);
        }
        if(node->right) {
            fun(ret, vec, node->right, cum + node->val, expectNumber);
        }
        if(!node->left && !node->right) {
            if(cum + node->val == expectNumber)
                ret.push_back(vec);
        }
    }
};

int main() {
    // -------------------------------------------------------------------------
    
    int a, b;
    int c = scanf("%d%d", &a, &b);
    cout << c << endl;

    return 0;
}