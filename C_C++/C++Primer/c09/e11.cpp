#include <vector>

using std::vector;

vector<int> ivec;
vector<int> ivec2(ivec);
vector<int> ivec3 = ivec;
vector<int> ivec{1, 2, 3, 4, 5};
vector<int> ivec(10);
vector<int> ivec(10, 1);
vector<int> ivec2(ivec.begin(), ivec.end());