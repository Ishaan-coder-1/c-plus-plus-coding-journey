 #include <iostream>

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward"};

    for(std::string student : students){
        std::cout << students << '\n'; 
    }

    return 0;
}

//foreach loop : loop that eases the traversal over an iterable data set
//its has less syntax but its less flexible
//it would work marvoulously if you need to print stuff
