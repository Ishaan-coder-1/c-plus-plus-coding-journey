#include <iostream>

int main() {

    //if you type const before a line of code it stays the same or you could make the variable name all caps
    //const basicaly makes a variable read only
    const double PI = 3.14159;
    double radius = 191;
    double circumference = 2 * PI * radius;

    std::cout << "the circumference of the circle which you had given is " << circumference << "cm";

    return 0;
}

//the below code is done by me 😊
int main() {
    double length = 25;
    double breadth = 16;
    const double perimeter_of_a_rectangle = (length + breadth) * 2;

    std::cout << "the perimeter of a rectangle which you had given is " << perimeter_of_a_rectangle;

    return 0;
}

int main() {

    double length = 23;
    double breadth = 45;
    const double area = length * breadth;

    std::cout << area;

    return 0;

}

int main() {

    double side = 36;
    const double perimeter = side * 4;

    std::cout << side;

    return 0;

}
