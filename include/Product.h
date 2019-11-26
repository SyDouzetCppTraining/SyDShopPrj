#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>

class Product
{
    public:
        int id;
        float price;
        int _size;
        std::string model;

        Product();
        virtual ~Product();

        // virtual method --> Abstract object
        // not possible to create instance of abstract object
        virtual void turnOnOff() = 0;

    protected:

    private:
};

#endif // PRODUCT_H
