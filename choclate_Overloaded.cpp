#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main(){

    bakePizza("spirinkles", "white cholate");

    return 0;
}

void choclate(){
    std::cout << "Here is your choclate! ";
}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " choclate!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " choclate!\n";
}
