#include <iostream>

int main(){

    // cout << (insertion operator) -> << is insertion operator
    // cin >> (extraction operator) -> >> is extraction operator

    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age; // problem, there is a newline character in our input buffer, so the function std::getline reads and stores the newline character

    std::cout << "What's your full name?: ";
    // std::cin >> name; // if the input has a whitespace, it stops reading -> Bro Code -> only Bro gets stored
    std::getline(std::cin >> std::ws, name); // this reads spaces, std::ws -> whitespaces -> removes any whitespaces in the input buffer

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}