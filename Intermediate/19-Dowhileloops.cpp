#include <iostream>

int main(){

    // do while loop = do some block of code first,
    //                 THEN repeat again if the condition is true

    int number; // defaults to 0

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number is: " << number;

    return 0;
}