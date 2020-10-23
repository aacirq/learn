#ifndef __STRVEC_H
#define __STRVEC_H

#include <string>
#include <memory>
#include <initializer_list>
#include <algorithm>

class StrVec {
public:
    StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr) { }
    StrVec(const StrVec&);
    StrVec(StrVec&&) noexcept;
    StrVec(std::initializer_list<std::string>);
    StrVec& operator=(const StrVec&);
    StrVec& operator=(StrVec&&) noexcept;
    ~StrVec();
    void push_back(const std::string&);
    void push_back(std::string&&);
    size_t size() const { return first_free - elements; }
    size_t capicity() const { return cap - elements; }
    std::string* begin() const { return elements; }
    std::string* end() const { return first_free; }
    void reserve(size_t n);
    void resize(size_t n, const std::string& str = std::string());
    std::string& at(size_t n) { return *(elements + n); }
    const std::string& at(size_t n) const { return *(elements + n); }

private:
    static std::allocator<std::string> alloc;
    std::string* elements;
    std::string* first_free;
    std::string* cap;

    std::pair<std::string*, std::string*> 
        alloc_n_copy(const std::string* p1, const std::string* p2);
    void free();
    void chk_n_alloc();
    void reallocate();
    void alloc_n_move(size_t sz);
    void range_initial(const std::string*, const std::string*);
};

std::allocator<std::string> StrVec::alloc;

// -----------------------------------------------------------------------------
// Implement
std::pair<std::string*, std::string*> 
StrVec::alloc_n_copy(const std::string* p1, const std::string* p2) {
    auto data = alloc.allocate(p2 - p1);
    return {data, std::uninitialized_copy(p1, p2, data)};
}

void StrVec::free() {
    // VERSINO: for version
    // if(elements) {
    //     for(auto it = first_free; it != elements; /* no */)
    //         alloc.destroy(--it);
    //     alloc.deallocate(elements, cap - elements);
    // }

    // VERSION: for_each & lambda
    if(elements) {
        std::for_each(elements, first_free, 
                      [this](std::string& c){ alloc.destroy(&c); });
        alloc.deallocate(elements, cap - elements);
    }
}

void StrVec::chk_n_alloc() {
    if(size() == capicity()) reallocate();
}

void StrVec::reallocate() {
    size_t new_size = size() ? 2 * size() : 1;
    alloc_n_move(new_size);
}

void StrVec::alloc_n_move(size_t sz) {
    auto newdata = alloc.allocate(sz);
    auto dest = newdata;
    auto elem = elements;
    for(size_t i = 0; i < size(); ++i) {
        alloc.construct(dest++, std::move(*elem++));
    }
    free();
    elements = newdata;
    first_free = dest;
    cap = newdata + sz;
}

void StrVec::range_initial(const std::string* b, const std::string* e) {
    auto data = alloc_n_copy(b, e);
    elements = data.first;
    first_free = cap = data.second;
}

StrVec::StrVec(const StrVec& s) {
    range_initial(s.begin(), s.end());
}

StrVec::StrVec(StrVec&& s) noexcept : 
elements(s.elements), first_free(s.first_free), cap(s.cap) {
    s.elements = s.first_free = s.cap = nullptr;
}

StrVec::StrVec(std::initializer_list<std::string> ilst) {
    range_initial(ilst.begin(), ilst.end());
}

StrVec& StrVec::operator=(const StrVec& rhs) {
    auto pair_range = alloc_n_copy(rhs.elements, rhs.first_free);
    free();
    // 先复制一份得到pair_range,再free(),避免self-assignment
    elements = pair_range.first;
    cap = first_free = pair_range.second;
    return *this;
}

StrVec& StrVec::operator=(StrVec&& rhs) noexcept {
    if(this != &rhs) {
        free();
        elements = rhs.elements;
        first_free = rhs.first_free;
        cap = rhs.cap;
        rhs.elements = rhs.first_free = rhs.cap = nullptr;
    }
    return *this;
}

StrVec::~StrVec() {
    free();
}

void StrVec::push_back(const std::string& str) {
    chk_n_alloc();
    alloc.construct(first_free++, str);
}

void StrVec::push_back(std::string&& str) {
    chk_n_alloc();
    alloc.construct(first_free++, std::move(str));
}

void StrVec::reserve(size_t n) {
    if(size() >= n) return;
    alloc_n_move(n);
}

void StrVec::resize(size_t n, const std::string& str) {
    if(n >= size()) {
        alloc_n_move(n);
        while(first_free != cap) {
            alloc.construct(first_free++, str);
        }
    }
    else {
        for(auto p = elements + n; p != cap; ++p) {
            alloc.destroy(p);
        }
        first_free = elements + n;
    }
}

#endif