#include <iostream>

int main(void){

    int x; // declaration
    x = 5; // initialization / assignment
    int y = 6; // definition -> declaration + initialization
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // int -> integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; // 7.5 will be truncated to 7 (the decimal portion gets cut off)
    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n';

    // double -> a number including decimals
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25; // gets diplayed normally
    std::cout << price << '\n';
    std::cout << gpa << '\n';
    std::cout << temperature << '\n';

    // char -> character, stores a single character
    char grade = 'A'; // must be stored in single quotes
    char initial = 'B';
    char multi = 'ABDC'; // gives us a warning and assigns only the last character
    char currency = '$';
    std::cout << grade << '\n';
    std::cout << initial << '\n';
    std::cout << multi << '\n';
    std::cout << currency << '\n';

    // booleans (true or false)
    bool student = false; // displays 1 or 0 based on value -> true=1, false=0
    bool power = true;
    bool forSale = true;
    std::cout << student << '\n';
    std::cout << power << '\n';
    std::cout << forSale << '\n';

    // strings -> objects that represent a sequence of text/characters / an array of characters
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "123 Fake St.";
    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << food << '\n';
    std::cout << address << '\n';

    std::cout << "Hello " << name << '\n'; // the thing before name -> string literal
    std::cout << "You are "<< age << " years old!" << '\n';

    return 0;
}