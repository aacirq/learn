#ifndef __MY_STRING_H
#define __MY_STRING_H

#include <iostream>
#include <memory>
#include <initializer_list>
#include <algorithm>

class String {
public:
    String() : String("") { }
    String(const String&);
    String(String&&) noexcept;
    String(const char*);
    String& operator=(const String&);
    String& operator=(String&&) noexcept;
    ~String();
    size_t size() const { return end - elements; }

private:
    friend std::ostream& operator<<(std::ostream&, const String&);
    std::pair<char*, char*>
        alloc_n_copy(const char*, const char*);
    void range_initial(const char*, const char*);
    void free();

    static std::allocator<char> alloc;
    char* elements;
    char* end;
};

std::allocator<char> String::alloc;

// -----------------------------------------------------------------------------
// Implement

std::pair<char*, char*> String::alloc_n_copy(const char* b, const char* e) {
    char* data = alloc.allocate(e - b);
    return {data, std::uninitialized_copy(b, e, data)};
}

void String::range_initial(const char* b, const char* e) {
    auto p = alloc_n_copy(b, e);
    elements = p.first;
    end = p.second;
}

void String::free() {
    if(elements) {
        std::for_each(elements, end, [this](char c){ alloc.destroy(&c); });
        alloc.deallocate(elements, end - elements);
    }
}

String::String(const String& str) {
    std::cout << "String copy-constructor" << std::endl;
    range_initial(str.elements, str.end);
}

String::String(String&& str) noexcept : elements(str.elements), end(str.end) {
    std::cout << "String move-constructor" << std::endl;
    str.elements = str.end = nullptr;
}

String::String(const char* c) {
    const char* p = c;
    while(*p) ++p;
    range_initial(c, ++p);
}

String& String::operator=(const String& str) {
    std::cout << "String operator=" << std::endl;
    auto p = alloc_n_copy(str.elements, str.end);
    free();
    elements = p.first;
    end = p.second;
    return *this;
}

String& String::operator=(String&& rhs) noexcept {
    std::cout << "String move operator =" << std::endl;
    if(this != &rhs) {
        free();
        elements = rhs.elements;
        end = rhs.end;
        rhs.elements = rhs.end = nullptr;
    }
    return *this;
}

String::~String() {
    free();
}

std::ostream& operator<<(std::ostream& ostrm, const String& str) {
    ostrm << str.elements;
}

#endif