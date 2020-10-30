#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

class Sales_data {
friend std::istream& operator>>(std::istream&, Sales_data&);
friend std::ostream& operator<<(std::ostream&, const Sales_data&);
friend Sales_data operator+(const Sales_data&, const Sales_data&);

public:
    Sales_data(const std::string& s, unsigned u, double d) :
               bookNo(s), units_sold(u), revenue(d*u) {}
    Sales_data() : Sales_data("", 0, 0) {}
    explicit Sales_data(const std::string& s) : Sales_data(s, 0, 0) {}
    explicit Sales_data(std::istream& is);

    std::string isbn() const { return bookNo; }

    Sales_data& operator+=(const Sales_data&);
    Sales_data& operator=(const Sales_data&);

private:
    double avg_price() const { units_sold ? revenue / units_sold : 0; };

    std::string bookNo;
    unsigned    units_sold = 0;
    double      revenue    = 0.0;
};

std::istream& operator>>(std::istream&, Sales_data&);
std::ostream& operator<<(std::ostream&, const Sales_data&);
Sales_data operator+(const Sales_data&, const Sales_data&);

#endif