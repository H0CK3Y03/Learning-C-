#include <iostream>

int main(){

    // arithmetic operators = return the result of a specific
    //                        arithmetic operation (+ - * /)
    using std::cout;

    int students = 20;

    // students = students + 1;
    // students++;
    // ++students;
    // students += 2;

    // students = students - 1;
    // students--;
    // --students;
    // students -= 2;

    // students = students * 2;
    // students *= 2;

    // students = students / 2;
    // students /= 3; // integer division -> any decimal portion is truncated
    // we can change any of the numbers to a float/double so the decimal portion doesn't get truncated
    // students = students / 3;

    int remainder = students % 3; // modulus operator -> %

    // These operators have a order of precedence:
    //      parenthesis
    //      multiplication & division
    //      addition & subtraction
    students = 6 - (5 + 4) * 3 / 2;

    cout << students << '\n' << remainder;

    return 0;
}