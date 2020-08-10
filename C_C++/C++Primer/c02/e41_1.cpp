#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned    units_quality = 0;
    double      revenue       = 0.0;
};

int main() {
    Sales_data data;
    double     price;
    while(std::cin >> data.bookNo >> data.units_quality >> price) {
        data.revenue = data.units_quality * price;
        std::cout << data.bookNo << " " << data.units_quality << " " << data.revenue << " ";
        if(data.units_quality != 0) {
            std::cout << price << std::endl;;
        } else {
            std::cout << "(no sales)" << std::endl;
        }
    }
    return 0;
}