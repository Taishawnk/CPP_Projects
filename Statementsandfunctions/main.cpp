#include <iostream>

int addition(int first_peram, int second_peram){
    int result = first_peram + second_peram;
    return result;
    //you must creat the function first before you use it
}

int multiply(int first_number, int second_number){
    int result = first_number * second_number;
    return result;
}



int main(){
    int first_number {9};
    int second_number {8};

    std::cout << "your first numbers is : " << first_number << " Your second number is : " << second_number << std::endl;
    std::cout << "your numbers are " << first_number << " & " << second_number <<std::endl;

    int sum = first_number + second_number;
    std::cout << "The sum of these numbers is : " << sum << std::endl;

    sum = addition(3,3);
    std::cout << "The sum of your function is : " << sum << std::endl; 

    std::cout << addition(6,7) << std::endl; //you dont need to assign the function output to a variable to use it 


    
    sum = addition(4,5) + addition(5,0);

    std::cout << sum << std::endl; 

    std::cout << "your numbers multiplied is  : " << multiply(4,5) << std::endl;

    return 0 ;  
}

    