#include <iostream>

int main(){

    // break = break out of a loop
    // continue = skip current iteration (go next)

    for(int i = 1; i <= 20; i++){
        if(i == 13){
            // continue;
            break;
        }
        std::cout << i << '\n';
    }

    return 0;
}