#include <iostream>
#include <cmath>
#include <ctime>

int main(){
 
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100 + 1);

    do{
        std::cout << "Enter a number between 1 to 100 ";
        std::cin >> guess;
        tries+= 1;

        if(guess > num){
            std::cout << "Too high! \n";
        }
        else if(guess < num){
            std::cout << "Too low \n";
        }
        else{
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }

    }while(guess != num);

    return 0;
}
