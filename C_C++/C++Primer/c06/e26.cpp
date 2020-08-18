#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
    for(std::size_t ind = 0; ind < argc; ++ind) cout << argv[ind] << " ";
    cout << endl;
    return 0;
}