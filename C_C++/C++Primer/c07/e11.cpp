#include "Sales_data.h"

int main() {
    std::cout << "data1" << std::endl;
    Sales_data data1;
    std::cout << "data2" << std::endl;
    Sales_data data2("abc");
    std::cout << "data3" << std::endl;
    Sales_data data3("abc", 1, 13.5);
    std::cout << "data4" << std::endl;
    Sales_data data4(std::cin);
    return 0;
}