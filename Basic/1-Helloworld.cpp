#include <iostream> // input/output stream header file

int main(){

    // This is a comment
    /*
        This
        is
        a
        multi-line
        comment
    */

    std::cout << "Hello, world!\n"; // std -> standard, cout -> character output, << -> output
    std::cout << "I like pizza!" << std::endl; // endl -> end line -> flushes the output buffer
    std::cout << "It's really good!" << '\n'; // \n -> newline character, better performance-wise
    return 0; // exit success
} // ; -> lets the compiler know the statement is finished, like a period after a sentence