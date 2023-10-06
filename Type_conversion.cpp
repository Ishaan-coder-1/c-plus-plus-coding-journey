#include <iostream>

int main () {
    
    char x = 100;
    double y = (int) 3.14;
    int c = (char) 100;

    int correct = 8;
    int questions = 10;
    double score = correct/(double) questions * 100;

    std::cout << x << '\n' << y << '\n' << score << '%';

    return 0;
}

//there are tow types of type conversions
// Implicit = automatic
// Explicit = becomes the value with the new data type 
// EX: double x = (int) 3.14; here (int) is the new data type
// if we say char x = 100 then accoreding to the ASCII table it will be converted
// EX: char x = 100 is the alaphabet d
// the second part is a irl example questions is a int but it can considered as a double
