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

static const auto io_sync_off = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    vector<string> Permutation(string str) {
        set<string> s;
        if(str.empty()) return vector<string>();
        perm(s, str, 0, str.size() - 1);
        return vector<string>(s.begin(), s.end());
    }

private:
    void swap(string& str, size_t i, size_t j) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }

    void perm(set<string>& vec, string& str, size_t k, size_t m) {
        if(k == m) {
            // vec.push_back(str);
            vec.insert(str);
        }
        else {
            for(size_t i = k; i <= m; ++i) {
                cout << "k: " << k << ", i: " << i << ": " << str << endl;
                swap(str, k, i);
                cout << ": " << str << endl;
                perm(vec, str, k + 1, m);
                swap(str, k, i);
            }
        }
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

    // vector<int> ivec = {1,2,3,2,4,2,5,2,3};
    // vector<int> ivec2 = {-2, -8, -1, -5, -9};

    string str;
    str.push_back(0x48);
    str.push_back(0x61);
    str.push_back(0x70);
    str.push_back(0x70);
    str.push_back(0x79);
    str.push_back(0x50);
    str.push_back(0x72);
    str.push_back(0x6f);
    str.push_back(0x67);
    str.push_back(0x72);
    str.push_back(0x61);
    str.push_back(0x6d);
    str.push_back(0x6d);
    str.push_back(0x65);
    str.push_back(0x72);
    str.push_back(0x27);
    str.push_back(0x73);
    str.push_back(0x44);
    str.push_back(0x61);
    str.push_back(0x79);
    cout << str << endl;

    return 0;
}