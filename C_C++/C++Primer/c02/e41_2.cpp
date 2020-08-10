#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned    units_quality = 0;
    double      revenue       = 0.0;
};

int main() {
    Sales_data data1;
    double price;
    unsigned totle_cnt = 0;
    double revenue = 0;
    if(std::cin >> data1.bookNo >> data1.units_quality >> price){
        data1.revenue = data1.units_quality * price;
        Sales_data data2;
        while(std::cin >> data2.bookNo >> data2.units_quality >> price) {
            data2.revenue = data2.units_quality * price;
            if(data1.bookNo == data2.bookNo) {
                data1.units_quality += data2.units_quality;
                data1.revenue += data2.revenue;
            } else {
                std::cout << data1.bookNo << " " << data1.units_quality << " " << data1.revenue << " ";
                if(data1.units_quality != 0) {
                    std::cout << data1.revenue / data1.units_quality << std::endl;
                } else {
                    std::cout << "(no sales)" << std::endl;
                }
                data1.bookNo = data2.bookNo;
                data1.units_quality = data2.units_quality;
                data1.revenue = data2.revenue;
            }
        }
        std::cout << data1.bookNo << " " << data1.units_quality << " " << data1.revenue << " ";
        if(data1.units_quality != 0) {
            std::cout << data1.revenue / data1.units_quality << std::endl;
        } else {
            std::cout << "(no sales)" << std::endl;
        }
    } else {
        std::cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}