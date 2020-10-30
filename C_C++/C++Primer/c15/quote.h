#ifndef __QUOTE_H
#define __QUOTE_H

#include <iostream>
#include <string>

class Quote {
public:
    Quote() = default;
    Quote(const std::string& book, double p) : bookNo(book), price(p) { }
    std::string isbn() const { return bookNo; }
    virtual double net_price(std::size_t n) const { return n * price; }
    virtual ~Quote() = default;
    virtual void debug() const
        { std::cout << "bookNo: " << bookNo << ", price" << price; };

private:
    std::string bookNo;

protected:
    double price = 0.0;
};

double print_total(std::ostream& os, const Quote& item, size_t n) {
    double ret = item.net_price(n);
    os << "ISBN: " << item.isbn() << " # sold: " << n 
       << " total due: " << ret << std::endl;
    return ret;
}

#endif