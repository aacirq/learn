#ifndef __DISC_QUOTE_H
#define __DISC_QUOTE_H

#include "quote.h"

class Disc_quote : public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string& book, double p, std::size_t q, double dsc)
        : Quote(book, p), quantity(q), discount(dsc) { }
    virtual double net_price(std::size_t n) const = 0;

protected:
    std::size_t quantity;
    double discount;
};

#endif