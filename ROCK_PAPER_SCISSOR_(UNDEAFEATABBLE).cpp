#include <iostream>

char getUserChoice();

int main(){

    char player;
    char computer;

    player = getUserChoice();

    if(player = 'r'){
        std::cout << "Your choice is: Rock! \n";
    }
    else if(player = 'p'){
        std::cout << "Your choice is: Paper \n";
    }
    else{
        std::cout << "your choice is: sicssors! \n";
    }
    

    if(player = 'r'){
        std::cout << "Computer chooses paper! & \n";   
    }
    else if(player = 'p'){
            std::cout << "Computer chooses scissors! & \n";
    }
    else{
        std::cout << "Computer chooses rock! & \n";
    }

    std::cout << "COMPUTER WINS!";

    return 0;
};
char getUserChoice(){
 
    char player;

    do{

        std::cout << "**************************** \n";
        std::cout << "Stone,Paper,Scissors game! \n";
        std::cout << "**************************** \n";
        std::cout << "'r' for rock \n";
        std::cout << "'p' for paper \n";
        std::cout << "'s' for scissors \n";

        std::cin >> player;
    } while(player != 'r' && player != 'p' && player != 's');
    

    return 0;
};
