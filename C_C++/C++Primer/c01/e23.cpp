#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item curitem, item;
    if(std::cin >> item) {
        int cnt = 1;
        while(std::cin >> curitem) {
            if(curitem.isbn() == item.isbn()) {
                ++cnt;
            } else {
                std::cout << "[" << item.isbn() << "] occurs " << cnt << " times." << std::endl;
                cnt = 1;
                item = curitem;
            }
        }
        std::cout << "[" << item.isbn() << "] occurs " << cnt << " times." << std::endl;
    }
    return 0;
}