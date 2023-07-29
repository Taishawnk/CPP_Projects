#include <iostream>
#include <string>
//printing out pool
//true returns 1
//false returns 0
int main(){
    int value1 {56}; //int  when run typeid on it it runs i wich is the ASCII for 56 intresting was expecting it to return a in
    auto value2 {3.0};//double
    auto value3 {3.4f};//float
    auto value4 {4.56734523234l}; //long double;
    auto value5 {'A'}; // char
    auto value6 {true};// bool


    std::cout << "the value is:  " << value1 << std::endl;
    std::cout << "the value is:  " << value2 << std::endl;
    std::cout << "the value is:  " << value3 << std::endl;
    std::cout << "the value is:  " << value4 << std::endl;
    std::cout << "the value is:  " << value5  << std::endl;
    std::cout << "the value is:  " << value6 << std::endl;

    

    return 0;
};