#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    string s1 = "1234", s2 = "abdjkagjd";
    cout << sizeof(s1) << " " << sizeof(s2) << endl;

    vector<int> v1{1, 2, 3, 4, 5}, v2{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << sizeof(v1) << " " << sizeof(v2) << endl;
    return 0;
}