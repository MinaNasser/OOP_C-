#ifndef EMPLYEE_H_INCLUDED
#define EMPLYEE_H_INCLUDED
#include <iostream>
using namespace std;
struct Emplyee
{

    private:
        int id;
        string name;
        float salary;
    public:
        Emplyee();
        Emplyee(int id,string name,float salary);
        Emplyee(int id,string name);
        void setId(int id);
        void setName(string name);
        void setSalary(float salary);
        int getId();
        string getName();
        float getSalary();
        void print();
        ~Emplyee();
};



#endif // EMPLYEE_H_INCLUDED
