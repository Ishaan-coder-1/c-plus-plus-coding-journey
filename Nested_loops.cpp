#include <iostream>

int main () {

    int rows;
    int columns;
    char symbol;

    std::cout << "How many rows?: ";
    std::cin >> rows;

    std::cout << "How many columns?: ";
    std::cin >> columns;

    std::cout << "Enter a symbold to use: ";
    std::cin >> symbol;


    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}

// a loop in a loop is called a nested loop
// this program makes a rectangle in the terminal
