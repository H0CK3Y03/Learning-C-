#include <iostream>

int main(){

    // switch = alternative to using many "if / else if statements"
    //          compare one value against matching cases

    // int month;
    // std::cout << "Enter the month (1-12): ";
    // std::cin >> month;

    // if(month == 1){
    //     std::cout << "It is January";
    // }
    // else if(month == 2){
    //     std::cout << "It is February";
    // }
    // else if(month == 3){
    //     std::cout << "It is March";
    // }
    // else if(month == 4){
    //     std::cout << "It is April";
    // }
    // else if(month == 5){
    //     std::cout << "It is May";
    // }
    // else if(month == 6){
    //     std::cout << "It is June";
    // }
    // else if(month == 7){
    //     std::cout << "It is July";
    // }
    // else if(month == 8){
    //     std::cout << "It is August";
    // }
    // else if(month == 9){
    //     std::cout << "It is September";
    // }
    // else if(month == 10){
    //     std::cout << "It is October";
    // }
    // else if(month == 11){
    //     std::cout << "It is November";
    // }
    // else if(month == 12){
    //     std::cout << "It is December";
    // }
    // else{
    //     std::cout << "You didn't enter a number between (1-12)";
    // }
    // Just ... no...
// ========================================================================================
    // switch(month){ // switch(valuetobeexamined)
    //     case 1:
    //         std::cout << "It is January";
    //         break;
    //     case 2:
    //         std::cout << "It is February";
    //         break;
    //     case 3:
    //         std::cout << "It is March";
    //         break;
    //     case 4:
    //         std::cout << "It is April";
    //         break;
    //     case 5:
    //         std::cout << "It is May";
    //         break;
    //     case 6:
    //         std::cout << "It is June";
    //         break;
    //     case 7:
    //         std::cout << "It is July";
    //         break;
    //     case 8:
    //         std::cout << "It is August";
    //         break;
    //     case 9:
    //         std::cout << "It is September";
    //         break;
    //     case 10:
    //         std::cout << "It is October";
    //         break;
    //     case 11:
    //         std::cout << "It is November";
    //         break;
    //     case 12:
    //         std::cout << "It is December";
    //         break;
    //     default:
    //         std::cout << "You didn't enter a number between (1-12)";
    //         break;
    // }

    char grade;

    std::cout << "What letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!";
            break;
        case 'B':
            std::cout << "You did good";
            break;
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do good";
            break;
        case 'F':
            std::cout << "YOU FAILED!";
            break;
        default:
            std::cout << "Please only enter in a letter grade (A-F)";
            break;
    }

    return 0;
}