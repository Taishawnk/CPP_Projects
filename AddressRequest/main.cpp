#include <iostream>
#include <string>
std::string address; //according to the teachers solution this should have gone in the main area mine still works but must not be the proper way
int main(){
    std::cout << "Where do you live?" << std::endl;
    std::cin >> address;
    std::cout << "I've heard great things about " << address <<" I'd like to go sometime." << std::endl;
    return 0;

}; 