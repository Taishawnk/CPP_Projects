#include <iostream>
#include <string>
int main(){
int num1 {31};
int num2 {10};

//addition
int value3 {num1 + num2};
std::cout << "the output of this value is: "<< value3 << std::endl;

//subtraction
int value4 {num1 - num2};
std::cout << "the output of this value is: "<< value4 << std::endl;

//mixing and matching
int value5 {num1 - num2 + num1};
std::cout << "the output of this value is: " << value5 << std::endl;

//division
int value6 {num1 / num2};
std::cout << "the output of this value is: "<< value6 << std::endl;

//multiplication
int value7 {num1 * num2};
std::cout << "the output of this value is: " << value7 << std::endl;

//modulo
int value8 {num1 % num2}; //never really thought of this but cant use modulo on floats or decimal numbers
std::cout << "the output of this value is: " << value8 << std::endl;

// division in CPP with ints will not give a fraction or a remainder ie 31 / 10 will be 3 even not 3.1 or 3r1

    return 0;
};