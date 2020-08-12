#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> scores(11, 0);
    auto first = scores.begin();
    int grade;
    while(cin >> grade) {
        if(grade <= 100) ++*(first + grade / 10);
    }

    for(auto s: scores) cout << s << " ";
    cout << endl;
    return 0;
}