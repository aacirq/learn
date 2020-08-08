#include <iostream>

int main() {
    int sum = 0, val = 10;
    while(val >= 0) {
        sum += val;
        --val;
    }
    std::cout << "Sum of 10 to 0 inclusive is "
              << sum << std::endl;
    return 0;
}