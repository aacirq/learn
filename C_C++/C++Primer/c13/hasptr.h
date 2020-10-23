#ifndef __HASPTR_H
#define __HASPTR_H

#include <iostream>
#include <string>

class HasPtr {
public:
    friend void swap(HasPtr& p1, HasPtr& p2);
    HasPtr(const std::string &s = std::string()) :
        ps(new std::string(s)), i(0) { }
    HasPtr(const HasPtr& hp) :
        ps(new std::string(*hp.ps)), i(hp.i) { }
    HasPtr(HasPtr&& hp) noexcept :
        ps(hp.ps), i(hp.i) { hp.ps = nullptr; }
    HasPtr& operator=(HasPtr rhs);
    ~HasPtr() { delete ps; }
    bool operator<(const HasPtr& rhs);
    void show() const { std::cout << *ps; }
    // void swap(HasPtr& rhs);

private:
    std::string *ps;
    int i;
};

void swap(HasPtr& p1, HasPtr& p2) {
    swap(p1, p2);
}

HasPtr& HasPtr::operator=(HasPtr rhs) {
    swap(*this, rhs);
    return *this;
}

bool HasPtr::operator<(const HasPtr& rhs) {
    return *ps < *rhs.ps;
}

// inline
// void HasPtr::swap(HasPtr& rhs) {
//     using std::swap;
//     swap(ps, rhs.ps);
//     swap(i, rhs.i);
//     std::cout << "call swap (" << *ps << ", " << *rhs.ps << ")" << std::endl;
// }

#endif