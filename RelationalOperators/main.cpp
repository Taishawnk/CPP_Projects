#include <iostream>
#include<string>


int main(){
    int num1 {60};
    int num2 {60};

    std::cout << std::endl;
    std::cout << "the value of number 1 is: " << num1 << std::endl;
    std::cout << "the value of number 2 is : " << num2 << std::endl;
    std::cout << std::endl;
    std::cout << std::boolalpha; // makes bools return true false instead of 1 0
    //can run std::cout std::noboolalpha to revert back to the 1 0 format
    std::cout << "is num1 grater then num 2: "<< (num1 > num2) << std::endl;
    std::cout << "is num1 greater then or equal to num 2: "<< (num1 >= num2) << std::endl;
    std::cout << "is num1 less the num2: "<< (num1 < num2) << std::endl;
    std::cout << "is num1 less then or equal to num2: "<< (num1 <= num2) << std::endl;
    std::cout << "is num1 equal to num2: "<< (num1 == num2) << std::endl;
    std::cout << "is num1 not equal to num2: "<< (num1 != num2) << std::endl;

    std::cout << std::endl;
    auto result = (num1 == num2); //could have done bool here
    std::cout << "The result of if num1: " << num1 << " == " << "num2: " << num2 << " is : " << result << std::endl;

    

    return 0;
}