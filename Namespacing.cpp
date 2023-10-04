#include <iostream>

namespace first{
    int x = 1;
}

int main() {
    using namespace first;

    int x = 0;

    std::cout << first::x;


    return 0; 
}

//namespace lets you you define an entity with many valus but when you are printing the value you need to specify whivch one t=you are using
//by using namespace --- we say the code to use that specific namespace but with printing if you write any other namespace the namespace which was written in the printing code will be printed not the one in the using command
//basicaly namespace provides a solution for naming conflicts in large projects
