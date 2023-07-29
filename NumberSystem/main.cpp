#include <iostream>
#include <string>
int main(){
    int number1 = 15;// decimal
    int number2 = 017; //octal 0 is a prifex leting system know its octal
    int number3 = 0x0f; //hex 0x is a prefix letting system know its hex
    int number4 = 0b00001111; //Bianary 0b is just a prefix letting system know its Bianary

    std::cout << "your decimal number1 is: " << number1 << std::endl;
    std::cout <<  "your number2 octal value is: " << number2 << std::endl;
    std::cout << "your number 3 hex value is:  " << number3 << std::endl;
    std::cout << "your number4 bianary value is:  " << number4 << std::endl;
    return 0;
}; 