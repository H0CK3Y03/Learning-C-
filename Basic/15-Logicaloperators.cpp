#include <iostream>

int main(){
    
    // && = checks if two conditions are true
    // || = checks if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = false;

    std::cout << "Enter a temperature: ";
    std::cin >> temp;

    // if(temp > 0 && temp < 30){
    //     std::cout << "The temperature is good!";
    // }
    // else{
    //     std::cout << "The temperature is bad!";
    // }

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!\n";
    }
    else{
        std::cout << "The temperature is good!\n";
    }

    // if(sunny){
    //     std::cout << "It is sunny outside!\n";
    // }
    // else{
    //     std::cout << "It is cloudy outside!\n";
    // }

    if(!sunny){
        std::cout << "It is cloudy outside!\n";
    }
    else{
        std::cout << "It is sunny outside!\n";
    }

    return 0;
}