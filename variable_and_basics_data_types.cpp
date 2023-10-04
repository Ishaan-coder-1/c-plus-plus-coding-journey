#include <iostream>

int main() {
    
    //int is used when the user wants to type a whole number like age,year,days etc.
    int age = 12;
    int year = 2023;
    int days = 7;
    
    //double is used when a user will be entering a number with a decimal point
    
    double gpa = 3.5;
    double temperature = 35.6;
    double price = 3.9;

    //char = charecter it store a single charecter
    char grade = 'A';
    char inital = 'B';

    //boolean is (true or false)
    //if a student is still going to school or not
    bool student = false;
    bool power = true;
    bool forsale = true;

    //string = it can hold many careters unlike char even sentences
    //REMBEMBER DOUBLE QUOTATION MARKS ONLY! (or else  it will think it is a char)
    std::string name = "Ishaan";
    std::string day = "Friday";
    std::string food = "pizza";

    //to print something we use the below command
    //'\n' makes the next thing which is going to print is printed on the next line

    std::cout << name <<'\n';
    std::cout << temperature <<'\n';
    std::cout << "hello " <<name <<'\n';
    std::cout << "temperature = " << temperature; 
  
    //this is used because it says that if there are 0 problems tell it and if there is a problem tell how many
    return 0;
}
