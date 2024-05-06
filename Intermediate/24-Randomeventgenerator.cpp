#include <iostream>
#include <ctime>

int main(){

    srand(time(0)); // function uses current time as a seed to generate random numbers

    int randNum = rand() % 5 + 1;

    switch(randNum){ // without break statements, the case will be executed and after the executed case, all remaining will follow
        case 1: std::cout << "You win a bumper sticker!\n";
            break;
        case 2: std::cout << "You win a t-shirt!\n";
            break;
        case 3: std::cout << "You win free lunch!\n";
            break;
        case 4: std::cout << "You win a gift card!\n";
            break;
        case 5: std::cout << "You win concert tickets!\n";
            break;
        default: break;
    }

    return 0;
}