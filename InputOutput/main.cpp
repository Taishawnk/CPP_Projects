#include <iostream>
#include <string>//get inline was not working because I did not bring in this include string first this include string allows the program to store strings 

int main(){
    //int age; //in variable empty at this point 
    //std::string name; //creating a empty name variable with type of string
    std::string full_name;
    
    


//    std::cout << "Pleae enter your last name: " << std::endl;
//    std::cin >> name;
//    std::clog << "logging customers name: " << name << std::endl; 

//    std::cout << "what is your age: " << std::endl;
//    std::cin >> age;
//    std::clog << "Logging customer age: " << age << std::endl;

//    std::cerr << "There was a problem with the enterd data"  << std::endl;


    //we can also chain then together to reduce code

    //std::cout << "please enter you name and your age sperated by a space" << std::endl;
    //std::cin >> name >> age;

    //std::cout << "your name is: " << name << " " << "your age is: " << age << std::endl;
    std::cout << " please enter your full name " << std::endl;
    std::getline(std::cin, full_name); 
    std::cout << " your full name is: " << full_name << std::endl; 

//in the envent we want a input that has space in it like full name for example we can use std::getline(std::cin, full_name) to make sure the spacing is registerd
    return 0;

};

    