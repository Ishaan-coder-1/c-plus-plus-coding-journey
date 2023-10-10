#include <iostream>
#include <cmath>
#include <ctime>

void happBirthday(std::string name);

int main(){

    std::string name = "ishaan";

    happBirthday(name);

    return 0;
}

void happBirthday(std::string name){
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday to " << name << '\n';
    std::cout << "Happy birthday to dear " << name <<'\n' << '\n';
}
