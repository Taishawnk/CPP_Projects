#include <iostream>
#include <string>

int main(){
    float number1 {1.0232342f};
    double number2 {3.47203948};
    long double number3 {4.02398403932948902384L};
    
    std::cout << "size of float: " << sizeof(number1) << std::endl;
    std::cout << "size of double: " << sizeof(number2) << std::endl;
    std::cout << "size of long double: " << sizeof(number3) << std::endl;
    return 0;
};