#include <iostream>
#include <cmath>

int main() {

    double age;

    std::cout << "enter your age ";
    std::cin >> age;

    int x = age - 18;

    if (age >= 18){
        std::cout << "welcome to the site! ";
    }
    else if (age < 0){
        std::cout << "you haven't been born yet! ";
    }
    else{
        std::cout << "you are not allowed " << '\n';
        std::cout << "come after " << abs(x) << " years" << '\n';
    }

    return 0;
}

// it does something if it is it else it does something else
