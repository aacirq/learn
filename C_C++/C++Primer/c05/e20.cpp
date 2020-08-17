#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string pre_word, this_word;
    bool exist = false;
    if(cin >> pre_word) {
        while(cin >> this_word) {
            if(this_word == pre_word) {
                exist = true;
                break;
            } else {
                pre_word = this_word;
            }
        }
    }
    if(exist) {
        cout << "Repeated word is: " << this_word << endl;
    } else {
        cout << "No repeated word." << endl;
    }
    return 0;
}