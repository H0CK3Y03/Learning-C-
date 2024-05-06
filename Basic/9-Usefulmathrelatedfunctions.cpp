#include <iostream>
#include <cmath>

int main(){

    double x = 3.99;
    double y = 4;
    double z;

    // z = std::max(x, y); // returns the max value from 2 operands
    // z = std::min(x, y); // returns the min value from 2 operands
    // z = pow(2, 3); // raises op1 to the power of op2
    // z = sqrt(9); // square root
    // z = abs(-3); // absolute value
    // z = round(x); // rounds number
    // z = ceil(x); // rounds up
    z = floor(x); // rounds down

    std::cout << z;

    return 0;
}