#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> level{"F", "D", "C", "B", "A", "A++"};
    cout << "Enter a grade: ";
    int grade;
    string letter;
    while(cin >> grade) {
        letter = grade < 60 ? level[0] : level[(grade - 50) / 10];
        cout << "Letter grade: " << letter << endl
             << "Enter a grade: ";
    }

    return 0;
}