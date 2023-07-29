#include <iostream>
#include <string>
//printing out pool
//true returns 1
//false returns 0
int main(){
    bool red_light {true};//if not specified witha a value ie {} will auto evaluate  to false aka 0 it seems
    bool green_light {false};

    std::cout << red_light << std::endl;
    if(red_light == true){
        std::cout << "you must stop at the red light"<< std::endl;

    }else{
        std::cout << "you can go" << std::endl;   
    }
    

    if(green_light){ //thing auto evalute to true unless specified so this is auto looking for a true value but we have defined it as false
        std::cout << "the light is green pleae go" << std::endl;
        
    }else{
        std::cout << "the light is not green you must stop" << std::endl; 
    }

    std::cout << sizeof(bool);
    return 0;
};