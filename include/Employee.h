#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee
{
    public:
        Employee();
        virtual ~Employee();

        unsigned int Getid() { return id; }
        void Setid(unsigned int val) { id = val; }
        std::string Getname() { return name; }
        void Setname(std::string val) { name = val; }
        int Getage() { return age; }
        void Setage(int val) { age = val; }
        int Getwages() { return wages; }
        void Setwages(int val) { wages = val; }

    protected:
        std::string name;
        int age;
        int wages;

    private:
        unsigned int id;
};

#endif // EMPLOYEE_H
