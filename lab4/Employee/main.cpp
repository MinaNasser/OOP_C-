#include <iostream>
#include "Emplyee.h"
using namespace std;

int main()
{
    // TODO: 1. Create a new Employee object
    Emplyee e1(1,"ali",1000);
    e1.print();
    Emplyee e2;
    e2.print();
    //use emplyee without salary
    Emplyee e3(2,"ahmed");

    e3.print();
    



    return 0;
}
