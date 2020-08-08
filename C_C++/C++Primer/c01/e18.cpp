#include <iostream>

int main() {
    int val, curval;
    if(std::cin >> val) {
        int cnt = 1;
        while(std::cin >> curval) {
            if(curval == val) {
                ++cnt;
            }else{
                std::cout << val << " occurs " << cnt << " times." << std::endl;
                cnt = 1;
                val = curval;
            }
        }
        std::cout << val << " occurs " << cnt << " times." << std::endl;
    }
    return 0;
}