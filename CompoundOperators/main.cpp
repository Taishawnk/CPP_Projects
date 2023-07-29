#include <iostream>
#include<string>


int main(){
    // compound assignment allows for addition , subtraction , multiplication , divison assignment in one go.
    int value {45};
    std::cout << "starting out my value is : " << value << std::endl; //45
    std::cout << std::endl;// creating a extra space

    value += 5;
    std::cout << "the += 5 is equilalent of saying 45 + 5: " << value << std::endl; //50

    //can do this for all orperation types to include modulo
    std::cout << std::endl;
    value -=5;
    std::cout << "this should put us back to 45: " << value << std::endl; //45
    
    std::cout << std::endl;
    value *= 2;
    std::cout << "this would multiply " <<  value << std::endl;//90
    
    std::cout << std::endl;
    value /=2;
    std::cout << "this would be to divied by a give number in this case 2: " << value << std::endl; //45

   
    std::cout << std::endl;
    value %= 2;
    std::cout << "this would give the remainder after dividing by 3: " << value << std::endl; // 1
    std::cout << std::endl;




    //keep in mind every time I made a change here value became that change so out side of the subtratcion section the value was never 45 again



    return 0;
}