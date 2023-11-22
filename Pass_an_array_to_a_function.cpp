#include <iostream>

double getTotal(double prices[], int size);

int main()
{
    double prices[] = {500.00, 2500.00, 600.00, 1000.00};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "$" << total;

    return 0;
}
double getTotal(double prices[],int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}

//When we pass an array to a function it decaes into a pointer(it gives its location), hence it doesnt know the size anymore, this can be fixed passing a separate argument which can be used to iterate over an array
//at line line 9 for the "prices" no need to define it as an array by adding "[]"
