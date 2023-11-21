#include <iostream>

int main()
{
    std::string student[] = {"Spongebob", "Patrick", "Squidward"};

    //case 1
    std::cout << student[0] << '\n';
    std::cout << student[1] << '\n';
    std::cout << student[2] << '\n';
              //or
    //case 2
    for(int i = 0; i < 3; i++){
        std::cout << student[i] << '\n';
    }
              //or
    //case 3
    for(int i = 0; i < sizeof(student)/sizeof(std::string); i++){
        std::cout << student[i] << '\n';
    }

    return 0;
}

//in case 1 we needed to write the code seprately every time which is unessary
//in case 2 the function which makes the code to stop after the size of our array or index needs to changed manually each time, this can be riffined too
//in case 3 everything is self updating and simplest from of the code.
