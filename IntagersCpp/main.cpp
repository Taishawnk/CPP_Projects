#include <iostream>
#include <string>

int main(){
    //intagers usally take up 4 bites of mem on the system  
    int elephen_count; // random garbage value 
    int lion_count {};// defaults at zero
    int dog_count {4};
    int cat_count {16};
    int cat_and_dogs {cat_count + dog_count};


    std::cout << elephen_count << std::endl;
    std::cout << cat_and_dogs << std::endl;
    std::cout << "how many lions are there?" << std::endl;
    std::cin >> lion_count ;
    std::cout << "Thank for tracking down all: " << lion_count << " lions." << std::endl;   
    return 0;
    //if you try to compile a decimal in a intager or int you will get a error
    // could alls do these int variables like this int dog_count = 4; but {} curly braces are a safer way as it will not let you compile decimels at all while = or () will but will chop off the
    //decimal and cause errors later
}; 