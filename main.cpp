#include <iostream>
#include "absolute_value.h"  // Include the header to access the function

int main() {
    // Test the function with some values
    int num1 = -10;
    int num2 = 5;
    int num3 = 0;

    std::cout << "Absolute value of " << num1 << " is " << absoluteValue(num1) << std::endl;
    std::cout << "Absolute value of " << num2 << " is " << absoluteValue(num2) << std::endl;
    std::cout << "Absolute value of " << num3 << " is " << absoluteValue(num3) << std::endl;

    return 0;
}
