#include <iostream>
#include <fstream>
#include <string>

#include "strblog.h"

using namespace std;

int main() {
    StrBlog blog;
    ifstream istm("e20_infile");
    string line;
    while(getline(istm, line)) {
        blog.push_back(line);
    }
    StrBlogPtr ptr = blog.begin();
    while(ptr != blog.end()) {
        cout << ptr.deref() << endl;
        ptr.incr();
    }
    return 0;
}