#include <iostream>

void bakePizza();
void bakePizza(std::string topping1); // function name + parameters = function signature -> each function signature must be unique
void bakePizza(std::string topping1, std::string topping2);

int main(){

    // overloaded functions = different versions of the same function = name can be same, but must have different parameters

    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni", "mushroom");

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}