#ifndef __LIMIT_QUOTE_H
#define __LIMIT_QUOTE_H

#include "disc_quote.h"

class Limit_quote : public Disc_quote {
public:
    Limit_quote() = default;
    Limit_quote(const std::string& book, double p, std::size_t q, double dsc)
        : Disc_quote(book, p, q, dsc) { }
    double net_price(std::size_t n) const override {
        if(n <= quantity) return n * (1 - discount) * price;
        else             return (n - quantity * discount) * price;
    }
};

#endif