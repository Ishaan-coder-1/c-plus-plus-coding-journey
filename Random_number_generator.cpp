#include <iostream>
#include <cmath>
#include <ctime>

int main(){

    srand(time(NULL));

    int num = (rand() % 20) + 1 ;

    std::cout << num;

    return 0;
}

// these are psuedo random number not random (but very close)
// use the modulus % to conform the range and if you dont want the number 0 just add a + 1 after the statement
