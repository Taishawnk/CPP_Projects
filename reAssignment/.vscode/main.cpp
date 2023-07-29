#include <iostream>
#include <string>
//printing out pool
//true returns 1
//false returns 0
int main(){

auto value2 {"cat"};
int value1 {32};
std::cout << "my age is: " << value1 << std::endl;

// we dont need to declare the type on re-assignment but we do have to use = and cant use {} for reassignment note types must match for reassignment cant and must conform to the 
//restriction of the original type a char ASCII cannot become a int by re assignment alone. Also be carefull with auto values as well

value1 = 31;
std::cout <<"sorry I messed up my age it is actually: " << value1 << std::endl;


std::cout << value2 << std::endl;

value2 = "dog";
std::cout << value2;

//this process works for all types

    return 0;
};