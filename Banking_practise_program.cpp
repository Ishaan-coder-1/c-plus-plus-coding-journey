#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balnce);


int main(){
 
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "1. Show Balance \n";
    std::cout << "2. Deposit Money \n";
    std::cout << "3. Withdraw Money \n";
    std::cout << "4. Exit \n";
    std::cout << "**************************** \n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    std::cout << "**************************** \n";

//exits the loop when charecters are typed:
    std::cin.clear();
    fflush(stdin);

    switch(choice){
        case 1: showBalance(balance);
                std::cout << "**************************** \n";
                break;
        case 2: balance = balance + deposit();
                showBalance(balance);
                std::cout << "**************************** \n";
                break;
        case 3: balance = balance - withdraw(balance);
                std::cout << "**************************** \n";
                break;
        case 4: std::cout << "Thanks for visiting! \n";
                std::cout << "**************************** \n";
                break;
        default:std::cout << "Invalid choice \n";
                std::cout << "**************************** \n";
    }
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
        std::cout << "Your balance is: $ " << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){

        double amount = 0;

        std::cout << "Enter amount to be deposited: ";
        std::cin >> amount;

        if(amount > 0){
                return amount;
        }
        else{
                std::cout << "Thats not a valid amount! \n";
                return 0;
        }

        return amount;
}
double withdraw(double balance){

        double amount = 0;
        
        std::cout << "Enter amount to be withdrawn: ";
        std::cin >> amount;

        if(amount > balance){
                double debt = amount - balance;
                std::cout << "insuficient balance! \n";
                std::cout << "Money still needed: " << debt << '\n';
                return 0;
        }
        else if(amount < 0){
                std::cout << "Thats not a valid amount \n";
                return 0;
        }
        else{
                return amount;
        }
}
