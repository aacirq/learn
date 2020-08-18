#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
    string str;
    for(std::size_t ind = 1; ind < argc; ++ind) str += argv[ind];
    cout << str << endl;
    return 0;
}