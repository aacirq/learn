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

class Solution {
public:
    int minNumberInRotateArray(const vector<int>& vec){
        if(vec.empty())     return 0;
        if(vec.size() == 1) return vec[0];
        int left = 0, right = vec.size() - 1;
        while(right - left > 0) {
        if(vec[left] < vec[right]) return vec[left];
        int mid = (left + right) / 2;
        if(vec[mid] > vec[left])      left = mid + 1;
        else if(vec[mid] < vec[left]) right = mid;
        else
            if(vec[mid] > vec[right]) left = mid + 1;
            else                      ++left;
        }
        return vec[left];
    }
};

int main() {
  Solution s;

  vector<int> vec1 = {1, 2, 3, 4, 5};
  vector<int> vec2 = {5, 1, 2, 3, 4};
  vector<int> vec3 = {4, 5, 1, 2, 3};
  vector<int> vec4 = {3, 4, 5, 1, 2};
  vector<int> vec5 = {2, 3, 4, 5, 1};

  vector<int> vec6 = {5, 1, 2, 5, 5, 5, 5, 5, 5};
  vector<int> vec7 = {5, 5, 5, 5, 5, 5, 1, 2};
  vector<int> vec8 = {5, 5, 5, 5, 5, 5, 5, 1, 2, 5, 5, 5};

  cout << "1: " << s.minNumberInRotateArray(vec1) << endl;
  cout << "2: " << s.minNumberInRotateArray(vec2) << endl;
  cout << "3: " << s.minNumberInRotateArray(vec3) << endl;
  cout << "4: " << s.minNumberInRotateArray(vec4) << endl;
  cout << "5: " << s.minNumberInRotateArray(vec5) << endl;
  cout << "6: " << s.minNumberInRotateArray(vec6) << endl;
  cout << "7: " << s.minNumberInRotateArray(vec7) << endl;
  cout << "8: " << s.minNumberInRotateArray(vec8) << endl;

  return 0;
}