#include <iostream>
#include<string>

int main(){
    //and &&
    bool a {false};
    bool b {true};
    std::cout << std::boolalpha;

    bool c {};
    if(a == false && b == false){//looks like i dont need to do the == could just do a && b but doing it how i did makes it easeir to understand for now
        c = false;
    }
    else if (a == false && b == true){
        c = true;
    }
    else if(a == true && b == false){
        c = false;
    }

    else{
        c =false;
    }
    std::cout << " the outcome of c is: " << c << std::endl;

    //or ||
    std::cout << std::endl;
    bool d {true};
    bool e {false};
    std::cout << std::boolalpha;

    bool f {};
    if(d == false || e == false){//looks like i dont need to do the == could just do a || b but doing it how i did makes it easeir to understand for now
        f = true;
    }
    else if (d == false || e == true){
        f = true;
    }
    else if(d == true  || e == false){
        f = true;
    }

    else{
        f = false;
    }
    std::cout << " the outcome of f is: " << f << std::endl;
    
    //not
    std::cout << std::endl;
    std::cout << "!a: " << a << std::endl;
    std::cout << "!b: " << b << std::endl;
    std::cout << "!c: " << c << std::endl;
    
    //cobining locgicals
    std::cout << "!(a&&b) || c " << (!(a && b) || c ) << std::endl;
    //also didnt need to do the if statment could have done the following 
    std::cout << std::boolalpha; // true / false
	std::cout << "a : " << a << std::endl;
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
	
	//AND : Evaluates to true when all operands are true.
	//A single false operand will drag 
    //the entire expression to evaluating false.
	
	std::cout << std::endl;
	std::cout << "Basic AND operations" << std::endl;
    std::cout << " a && b : " << (a && b) << std::endl; // false
    std::cout << " a && c : " << (a && c ) << std::endl; // true
    std::cout << " a && b && c :" << (a && b && c) << std::endl; // false

	//OR : Evaluates to true when at least one operand true.
	//A single true operand will push 
    //the entire expression to evaluating true.
	std::cout << std::endl;
	std::cout << "Basic OR operations" << std::endl;
    std::cout << " a || b : " << (a || b) << std::endl;
    std::cout << " a || c : " << (a || c ) << std::endl;
    std::cout << " a ||b || c :" << (a || b || c) << std::endl;

	//NOT : Negates whateve operand you put it with
	std::cout << std::endl;
	std::cout << "Basic NOT operations" << std::endl;	
	std::cout << "!a : " << !a << std::endl;
	std::cout << "!b : " << !b << std::endl;
	std::cout << "!c : " << !c << std::endl;

	//Combinations of all these operators
	std::cout << std::endl;
	std::cout << "Combining logical operators" << std::endl;
	// !(a &&b) || c
	std::cout << "!(a &&b) || c : " << (!(a &&b) || c) << std::endl; // true

    //Combining logical operators with relational operators

	std::cout << std::endl;
	std::cout << "Relational and logic operations on integers" << std::endl;
	std::cout << "d : " << d << std::endl;
	std::cout << "e : " << e << std::endl;
	std::cout << "f : " << f << std::endl;
	
	std::cout << std::endl;
	std::cout << "(d > e) && (d > f) : " << ((d > e) && (d > f)) << std::endl; // true
	std::cout << "(d==e) || (e <= f ) : " << ((d==e) || (e <= f ) ) << std::endl;
	std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
	std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
	std::cout << "(d > f) && (f <= d) : " << ((d > f) && (f <= d)) << std::endl;
	std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
	std::cout << "(! a) && (d == e) : " << ((! a) && (d == e)) << std::endl;
    std::cout << "((d >= e) || (e <= f )): " << ((d >= e) || (e <= f)) << std::endl;

    return 0;
}