#include <iostream>
#include <vector>

using namespace std;

int main() {
    int array[] = {1, 2, 3, 4, 5};
    for(size_t i = 0; i < 5; ++i)
        ++array[i];

    vector<int> vec = {1, 2, 3, 4, 5};
    for(auto b = vec.begin(), e = vec.end(); b != e; ++b)
        cout << *b << endl;

    return 0;
}