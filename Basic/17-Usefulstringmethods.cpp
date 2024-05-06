#include <iostream>

int main(){

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if(name.length() > 12){ // gives you the length of the string
    //     std::cout << "Your name can't be over 12 characters!\n";
    // }
    // else{
    //     std::cout << "Welcome " << name << '\n';
    // }

    // if(name.empty()){ // returns a boolean value
    //     std::cout << "You didn't enter your name";
    // }
    // else{
    //     std::cout << "Hello " << name << '\n';
    // }

    // name.clear(); // deletes the string / removes it
    // std::cout << "Hello " <<name;

    // name.append("@gmail.com");
    // std::cout << "Your username is now: " << name;

    // std::cout << name.at(1); // displays the character at the index

    // name.insert(0, "@"); // inserts at the index the character
    // std::cout << name << '\n';

    // std::cout << name.find(' '); // finds the character and returns the index

    name.erase(0, 3); // removes all characters in the interval of indices, first index inclusive, second is exclusive
    std::cout << name << '\n';

    return 0;
}