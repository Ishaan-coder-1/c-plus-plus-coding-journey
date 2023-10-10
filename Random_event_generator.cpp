#include <iostream>
#include <cmath>
#include <ctime>

int main(){

    srand(time(0));
    int Randnum = rand() % 5 + 1;

    switch(Randnum){
        case 1:
            std::cout << "You win a bumper sticker! \n";
            break;
        case 2:
            std::cout << "You win a t-shirt! \n";
            break;
        case 3:
            std::cout << "You win a free lunch! \n";
            break;
        case 4:
            std::cout << "You win a gift card! \n";
            break;
        case 5:
            std::cout << "You win concert tickets! \n";
            break;

    }

    return 0;
}

//it generates a random response
