#include <iostream>

std::string concatStrings(std::string string1, std::string string2);

int main(){

    std::string firstname = " ISHAAN";
    std::string lastname = "R.K";
    std::string fullName = concatStrings(firstname, lastname);

    std::cout << "Hello" << fullName;

    return 0;
}
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}
