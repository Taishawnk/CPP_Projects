#include <iostream>
#include<string>


int main(){
    char value {65};
    char value2 {'a'};
    std::cout << "Ascii char value without converint to int: " << value << std::endl;
    std::cout << "Ascii char value converted output as its int form : " << static_cast<int>(value) << std::endl;

    std::cout <<"we can just enter in chars if we want we dont have to use Ascii number representaion: " << value2  <<std::endl;

    std::cout << "takes up one byte in mem " << sizeof(value2) << std::endl;
     std::cout << "takes up one byte in mem" << sizeof(value) << std::endl;  
     //we can only have 0 - 255 diffrent values    
    return 0;
}