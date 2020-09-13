#include <iostream>
#include <iterator>
#include <vector>
#include <string>

using std::cin; using std::cout; using std::endl;
using std::istream_iterator; using std::ostream_iterator;
using std::vector; using std::string;

int main() {
    vector<string> svec;
    istream_iterator<string> in_str(cin), eof;
    ostream_iterator<string> out_str(cout, "\n");
    while(in_str != eof) {
        svec.push_back(*in_str++);
        out_str = *(svec.end() - 1);
    }
    return 0;
}