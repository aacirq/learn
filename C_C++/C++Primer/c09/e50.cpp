#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::endl;
using std::vector; using std::string;

int main() {
    vector<string> svec = {"123", "456", "789", "-12"};
    int sum = 0;
    for(const auto &s : svec) {
        sum += stoi(s);
    }
    cout << sum << endl;

    vector<string> sdvec = {"12.12", "-10.3", "-50", "63.22"};
    double sum_d = 0;
    for(const auto &s : sdvec) {
        sum_d += stod(s);
    }
    cout << sum_d << endl;
    return 0;
}