#include <iostream>

void printNum();

//myNum here is a global variable
int myNum = 1;

int main(){

    //myNUm here is a local variable
    int myNum = 1;

    printNum();

    // the two semicolons make it use the global version(variable scope)
    std::cout << ::myNum;

    return 0;
}
void printNum(){
    int myNum = 1;
    std::cout << myNum;
}

//functions cant see in other functions
//functions prefers local versions
//function or arguments inside curly barckets are not visible to other by the ones outside are visible to evryone
// it is advised not use global functions because it polutes the global namespaces and is not safe
