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
    int GetNumberOfK(const vector<int>& data ,int k) {
        if(data.empty()) return 0;
        int left = 0, right = data.size() - 1;
        while(right - left > 1) {
            int mid = (left + right) / 2;
            if(data[mid] > k)
                right = mid;
            else if(data[mid] < k)
                left = mid;
            else
                left = right = mid;
        }
        if(data[left] == k) right = left;
        else if(data[right] == k) left = right;
        else return 0;
        int n = 0;
        while(left >= 0 && data[left--] == k) ++n;
        while(right < data.size() && data[right++] == k) ++n;
        return n - 1;
    }
};

int main() {
    Solution s;
    for(int i = 0; i < 15; ++i) {
        cout << i << ": " << s.LeftRotateString("abcXYZdef", i) << endl;
    }

    return 0;
}