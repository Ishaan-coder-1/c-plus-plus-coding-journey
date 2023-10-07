#include <iostream>
#include <cmath>

int main () {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**********************CALCULATOR*************************\n";

    std::cout << "Enter ethier (+ - * /): ";
    std::cin >> op;

    std::cout << "enter Num1 ";
    std::cin >> num1;

    std::cout << "enter Num2 ";
    std::cin >> num2;

    switch (op){

        case '+':
            result = num1 + num2;
            std::cout << "result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "result: " << result << '\n';
            break;
        defalut:
            std::cout << "That wasn't a valid response! ";

    };

    std::cout << "***********************************************\n";

    return 0;
}
