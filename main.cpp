#include <iostream>

#include "Computer.h"

using namespace std;

void displayProduct(const Product& _product) {
    cout << "\nAddress: " << &_product << endl;
    cout << "\n" << _product.model << " " << _product.price << endl;
}

int main()
{
    Computer myComputer;

    myComputer.price = 30;
    myComputer.model = "Pear";

    cout << "Hello world!" << endl;

    cout << "\nAddress: " << &myComputer << endl;

    myComputer.turnOnOff();

    displayProduct(myComputer);

    return 0;
}
