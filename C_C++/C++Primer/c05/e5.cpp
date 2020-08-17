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
        if(grade < 60) {
            letter = level[0];
        } else {
            letter = level[(grade - 50) / 10];
            if(grade != 100) {
                if(grade % 10 <= 3) letter += '-';
                else if(grade % 10 >= 7) letter += '+';
            }
        }
        cout << "Letter grade: " << letter << endl
             << "Enter a grade: ";
    }

    return 0;
}