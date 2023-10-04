#include <iostream>
#include <vector>

//typedef std::string text_t;
//typedef int number_t;
using text_t =std::string;
using number_t = int;

int main () {

    text_t firstName = "ISHAAN";
    number_t age = 13;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

     
    return 0;
}

//notes: typedef is used for giving a function a name which can be easily called when coding
// if you are using typedef use it as: typedef std::string text_t, so that when you type text_t it uses taht function
// the other alternative is the "using function" if you are using the using command use it as: using text_t = std::string
// QUESTIONS:
// Why isnt std::cout working as a using function? - please help!
