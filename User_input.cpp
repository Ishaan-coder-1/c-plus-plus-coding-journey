#include <iostream>

int main () {

   std::string name;
   int age;

   std::cout << "What is your age? ";
   std::cin >> age;

   std::cout << "Whats your full name?: ";
   std::getline(std::cin >> std::ws, name);

    std::cout << "Hello " << name;
    std::cout << " you are " << age << " years old";

    return 0;
}

// cin is used to get user info and after that we have to use the >> function NOT the << function
// if you are expecting spaces in between the input then use this 'std::getline(std::cin >> std::ws, name);'
