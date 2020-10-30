#include "Sales_data.h"

Sales_data::Sales_data(std::istream& is) : Sales_data() {
    is >> *this;
}

// Sales_data& Sales_data::operator+(const Sales_data &rhs) {
//     units_sold = rhs.units_sold;
//     revenue    = rhs.revenue;
//     return *this;
// }

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs) {
    Sales_data ret = lhs;
    ret += rhs;
    return ret;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

Sales_data& Sales_data::operator=(const Sales_data& rhs) {
    bookNo = rhs.bookNo;
    units_sold = rhs.units_sold;
    revenue = rhs.revenue;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Sales_data& data) {
    os << data.isbn() << " " << data.units_sold << " " << data.revenue
       << " " << data.avg_price();
    return os;
}

std::istream& operator>>(std::istream& is, Sales_data& data) {
    double price = 0;
    is >> data.bookNo >> data.units_sold >> price;
    data.revenue = data.units_sold * price;
    return is;
}