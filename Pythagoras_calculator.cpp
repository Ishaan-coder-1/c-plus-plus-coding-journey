#include <iostream>
#include <cmath>

int main() {
    
    double a;
    double b;
    double c;

    std::cout << "enter side A: ";
    std::cin >> a;

    std::cout << "enter side B: ";
    std::cin >> b;


    a = pow(a, 2);
    b = pow(b, 2);
    c = (a + b);

    std::cout << "c square is " << c;

    return 0;
}
