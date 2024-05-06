#include <iostream>

int main(){

    // type conversion = conversion of a value of one data type to another
    //                  Implicit = automatic
    //                  Explicit = Precede value with new data type (int)

    // int x = (double) 3.14;
    // std::cout << x;

    // char x = 100;
    // std::cout << (int)(x) << '\n';
    // std::cout << (char)100; // explicit conversion -> (datatype_new) datatype_old || data_type_new(data_type_old) || both parenthesis 

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100;

    std::cout << score << '%';

    return 0;
}