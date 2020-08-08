#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item item, curitem;
    if(std::cin >> item) {
        while(std::cin >> curitem) {
            if(curitem.isbn() == item.isbn()) {
                item += curitem;
            } else {
                std::cout << item << std::endl;
                item = curitem;
            }
        }
        std::cout << item << std::endl;
    }
    return 0;
}