#ifndef COMPUTER_H
#define COMPUTER_H

#include <Product.h>

#include <iostream>

class Computer : public Product
{
    public:
        int RAM;
        int screenSize;
        bool isLaptop;

        Computer();
        virtual ~Computer();

        void turnOnOff();

    protected:

    private:
        void update();
};


#endif // COMPUTER_H
