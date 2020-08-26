#include <vector>

using std::vector;

void fun(vector<int> &iv, int some_val) {
    vector<int>::iterator iter = iv.begin();
    while(iter != (iv.begin() + iv.size() / 2)) {
        if(*iter == some_val) {
            ++(iter = iv.insert(iter, some_val));
        }
    }
}