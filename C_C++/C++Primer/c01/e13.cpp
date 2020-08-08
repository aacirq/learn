#include <iostream>

int main() {
    int sum = 0;
    for(int val = 50; val <= 100; ++val) sum += val;
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
    
    sum = 0;
    for(int val = 10; val >= 0; --val) sum += val;
    std::cout << "Sum of 10 to 0 inclusive is " << sum << std::endl;

    int val1, val2;
    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> val1 >> val2;
    if(val1 > val2) {int tmp = val1; val1 = val2; val2 = tmp;}
    for(int val = val1; val <= val2; ++val) std::cout << val << " ";
    std::cout << std::endl;
    return 0;
}