#include <iostream>

int main () {

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name. length() > 12){
      std::cout << "your name cant be over 12 charecters";
    }
    else{
        std::cout << "Welcome " << name;
    }

    return 0;
}

// types of strings .length,.clear,.empty,.append,.at,.insert,.find,.erase
