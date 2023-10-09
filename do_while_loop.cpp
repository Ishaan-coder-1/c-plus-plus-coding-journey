#include <iostream>

int main () {

    int number;

    do{
        std::cout << "Enter a postive #: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The # is: " << number;

    return 0;
}

// it does some block of code first, THEN repeat again if true
