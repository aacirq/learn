#ifndef __STRBLOG_H
#define __STRBLOG_H

#include <vector>
#include <string>
#include <memory>
#include <exception>
#include <initializer_list>

class StrBlogPtr;
class ConstStrBlogPtr;

class StrBlog {
public:
    friend class StrBlogPtr;
    friend class ConstStrBlogPtr;
    typedef std::vector<std::string>::size_type size_type;

    StrBlog() : data(std::make_shared<std::vector<std::string>>()) { }
    StrBlog(std::initializer_list<std::string> il);
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }
    void push_back(const std::string& str) { data->push_back(str); }
    void push_back(std::string&& str) { data->push_back(std::move(str)); }
    void pop_back();
    std::string& front();
    std::string& back();
    const std::string& front() const;
    const std::string& back() const;
    StrBlogPtr begin();
    StrBlogPtr end();
    ConstStrBlogPtr begin() const;
    ConstStrBlogPtr end() const;
    std::string& at(size_type ind) const { return (*data)[ind]; }

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string& msg) const;
};

// -----------------------------------------------------------------------------

class StrBlogPtr {
public:
    StrBlogPtr() : curr(0) { }
    StrBlogPtr(StrBlog& a, std::size_t sz = 0) : wptr(a.data), curr(sz) { }
    std::string& deref() const;
    StrBlogPtr& incr();
    bool operator!=(const StrBlogPtr& rhs) { return curr != rhs.curr; }

private:
    std::shared_ptr<std::vector<std::string>> 
        check(std::size_t i, const std::string& msg) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

// -----------------------------------------------------------------------------

class ConstStrBlogPtr {
public:
    ConstStrBlogPtr() : curr(0) { }
    ConstStrBlogPtr(const StrBlog& a, std::size_t sz = 0) : 
        wptr(a.data), curr(sz) { }
    const std::string& deref() const;
    ConstStrBlogPtr& incr();
    bool operator!=(const ConstStrBlogPtr& rhs) { return curr != rhs.curr; }

private:
    std::shared_ptr<std::vector<std::string>> 
        check(std::size_t i, const std::string& msg) const;
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};

// -----------------------------------------------------------------------------

inline
StrBlog::StrBlog(std::initializer_list<std::string> il) : 
    data(std::make_shared<std::vector<std::string>>(il)) { }

inline
void StrBlog::pop_back() {
    check(0, "pop_back out of range"); 
    data->pop_back();
}

inline
std::string& StrBlog::front() {
    check(0, "front out of range"); 
    return data->front();
}

inline
std::string& StrBlog::back() {
    check(0, "back out of range");
    return data->back();
}

inline
const std::string& StrBlog::front() const {
    check(0, "front out of range");
    return data->front();
}

inline
const std::string& StrBlog::back() const {
    check(0, "back out of range");
    return data->back();
}

inline
void StrBlog::check(size_type i, const std::string& msg) const {
    if(i >= data->size())
        throw std::out_of_range(msg);
}

inline
StrBlogPtr StrBlog::begin() {
    return StrBlogPtr(*this, 0);
}

inline
StrBlogPtr StrBlog::end() {
    return StrBlogPtr(*this, data->size());
}

inline
ConstStrBlogPtr StrBlog::begin() const {
    return ConstStrBlogPtr(*this, 0);
}

inline
ConstStrBlogPtr StrBlog::end() const {
    return ConstStrBlogPtr(*this, data->size());
}

// -----------------------------------------------------------------------------

inline
std::string& StrBlogPtr::deref() const {
    auto ret = check(curr, "dereference past end");
    return (*ret)[curr];
}

inline
StrBlogPtr& StrBlogPtr::incr() {
    auto p = check(curr, "increment past end of StrBlogPtr");
    ++curr;
    return *this;
}

inline
std::shared_ptr<std::vector<std::string>> 
StrBlogPtr::check(std::size_t i, const std::string& msg) const {
    auto ret = wptr.lock();
    if(!ret) throw std::runtime_error("unbound StrBlogPtr");
    if(i >= ret->size()) throw std::out_of_range(msg);
    return ret;
}

// -----------------------------------------------------------------------------

inline
const std::string& ConstStrBlogPtr::deref() const {
    auto ret = check(curr, "dereference past end");
    return (*ret)[curr];
}

inline
ConstStrBlogPtr& ConstStrBlogPtr::incr() {
    auto p = check(curr, "increment past end of StrBlogPtr");
    ++curr;
    return *this;
}

inline
std::shared_ptr<std::vector<std::string>> 
ConstStrBlogPtr::check(std::size_t i, const std::string& msg) const {
    auto ret = wptr.lock();
    if(!ret) throw std::runtime_error("unbound StrBlogPtr");
    if(i >= ret->size()) throw std::out_of_range(msg);
    return ret;
}

#endif