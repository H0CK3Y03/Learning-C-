#include <iostream>


int myNum = 3; // best to avoid global variables -> pollutes the global name space
// variables declared in a function are much more secure

void printNum();

int main(){

    // Local variables = declared inside a function or block of {}
    // Global variables = declared outside of all functions
    // Functions prefer local variables over global ones -. they will use any local variables first

    int myNum = 1;

    printNum();

    std::cout << ::myNum << '\n'; // :: -> scope resolution operator -> instead of using a local variable, the function uses the global variable if they have same names

    return 0;
}

void printNum(){
    // int myNum = 2;
    std::cout << myNum << '\n';
}