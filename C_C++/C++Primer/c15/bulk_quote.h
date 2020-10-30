#ifndef __BULK_QUOTE_H
#define __BULK_QUOTE_H

#include "disc_quote.h"

class Bulk_quote : public Disc_quote {
public:
    using Disc_quote::Disc_quote;
    double net_price(std::size_t n) const override {
        if(n >= quantity) return (1 - discount) * n * price;
        else             return n * price;
    }
};

#endif
