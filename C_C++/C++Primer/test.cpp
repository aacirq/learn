#include <iostream>
#include <vector>

using std::vector;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        auto len_row = array.size();
        if(len_row == 0) return false;
        auto len_col = array[0].size();
        if(len_col == 0) return false;
        if(target < array[0][0]) return false;
        if(target > array[len_row - 1][len_col - 1]) return false;
        int cur_col = len_col - 1, cur_row = 0;
        while(cur_col >= 0 && cur_row < len_row) {
            if(target == array[cur_row][cur_col]) return true;
            if(target > array[cur_row][cur_col]) --cur_col;
            else if(target < array[cur_row][cur_col]) ++cur_row;
        }
        return false;
    }
};

int main() {
}