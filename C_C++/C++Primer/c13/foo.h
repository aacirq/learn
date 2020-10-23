#ifndef __FOO_H
#define __FOO_H

#include <iostream>
#include <vector>
#include <algorithm>

class Foo {
public:
    Foo() { }
    Foo(const Foo& f) {
        // data.clear();
        data.resize(f.data.size());
        for(int i = 0; i < f.data.size(); ++i) data[i] = f.data[i];
    }

    Foo sorted() && {
        std::sort(data.begin(), data.end());
        return *this;
    }

    Foo sorted() const & {
        std::cout << "Foo sorted" << std::endl;
        return Foo(*this).sorted();
    }

private:
    std::vector<int> data;
};

#endif