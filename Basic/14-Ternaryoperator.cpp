#include <iostream>

int main(){

    // ternary operator ?: = replacement to an if/else statement
    // condition ? valueifTrue : valueifFalse; Parenthesis are optional

    int grade = 50;

    // if(grade >= 60){
    //     std::cout << "You pass!";
    // }
    // else{
    //     std::cout << "You fail!";
    // }
    
    // grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";

    // int number = 10;

    // number % 2 ? std::cout << "ODD" : std::cout << "EVEN";
    
    bool hungry = true;

    // hungry ? std::cout << "You are hungry" : std::cout << "You are full";

    std::cout << (hungry ? "You are hungry" : "You are full"); // same thing as above but condensed

    return 0;
}