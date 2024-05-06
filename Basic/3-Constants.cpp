#include <iostream>

int main(){
    // The const keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // it's (read-only), can't be overwritten normally

    const double PI = 3.14159;
    // PI = 420.69; // returns an error -> assignment of read-only variable error
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm\n";

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    return 0;
}