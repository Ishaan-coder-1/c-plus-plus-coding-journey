#include <iostream>

int main()
{

    std::string cars[3]; 

    cars[0] = "Porshe";
    cars[1] = "Mustang";
    cars[2] = "Bughatti";

    std::cout << cars[0] << '/n';
    std::cout << cars[1] << '/n';
    std::cout << cars[2] << '/n';

    return 0;
}

//arrays are a datastructure which hold strings or variables
//when we declare these arrays we need to specify the size of the array, like in line 6 [3] because theres are three objects
