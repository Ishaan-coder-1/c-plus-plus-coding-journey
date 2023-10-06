#include <iostream>
#include <cmath>

int main () {

    double x = 3.99;
    double y = 4;
    double z;

    //z = std::max(x,y); maxium
    //z = std::min(x,y)minimum
    //z = pow(2,3); power
    //z = sqrt (9); square root
    //z = abs(-3) absolute value - becomes +
    //z = round(x) round off
    //z = ceil(x) highest round off
    //z = floor(x) lowest round off
    z = pow(2, 3);

    std::cout << z;

    return 0;
}

// ALWAYS include cmath
