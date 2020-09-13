#include <iostream>
#include <fstream>
#include <iterator>

using std::cin; using std::cout; using std::endl;
using std::ifstream; using std::ofstream;
using std::istream_iterator; using std::ostream_iterator;

int main(int argc, char *argv[]) {
    ifstream input(argv[1]);
    ofstream out1(argv[2]), out2(argv[3]);
    istream_iterator<int> item_it(input), eof;
    ostream_iterator<int> odd_it(out1, " "), even_it(out2, "\n");
    while(item_it != eof) {
        int i = *item_it++;
        if(i % 2) odd_it = i;
        else      even_it = i;
    }
    return 0;
}