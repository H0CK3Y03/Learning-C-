#include <iostream>

void happyBirthday(std::string, int); // declaration of a function

int main(){

    // function = a block of reusable code

    std::string name = "Bro";
    int age = 21;

    happyBirthday(name, age); // invokes the function
    happyBirthday(name, age);
    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to you!\n\n";
    std::cout << "You are " << age << " years old!";
}