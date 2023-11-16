#include <iostream>

int main()
{
    double gpa = 2.5;
    std::string name = "Bro code";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B','C','D','F'};
    std::string students[] = {"Ishaan", "spongebob", "patrick"};

    std::cout << sizeof(grades)/sizeof(char) << " elements\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
    std::cout << sizeof(grades) << " Bytes\n";

    return 0;
}

//the sizeof() determines the size in bytes of a variable, data type, class, objects, etc.
//to find the size of an array use ex: sizeof(grades)/sizeof(char) 
//to find the size of a string array use ex: std::cout << sizeof(students)/sizeof(std::string) << " elements\n";
//size of a number is 8 bytes
//size of a string is 32 bytes
//size of a char is 1 byte
//size of a boolean is 1 byte
//size of a arrays is 5 bytes
