#include <iostream>

int main() {

    int temp;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if (temp > 0 && temp < 30){
        std::cout << "the temperature is good";
    }
    else{
        std::cout << "temperature is bad";
    }

    return 0;
}

// && (and) = checks two conditions
// || (or) = checks if at least one of the two conditions are true
// ! (not) = reverses the logical stae of its operand
