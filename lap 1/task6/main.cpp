#include <iostream>

//task 6

using namespace std;

struct Employee{
    int id;
    float salary;

};


void printEmpByVal(Employee e){
    e.id=555;
    cout<<"ID: "<<e.id<<endl<<"Salary : "<<e.salary<<endl;
}
void printEmpByRef(Employee& e){
    cout<<"ID: "<<e.id<<endl<<"Salary : "<<e.salary<<endl;
}
void printEmpByPointer(Employee* e){
    cout<<"ID: "<<e->id<<endl<<"Salary : "<<e->salary<<endl;
}


int main()
{
    Employee emp;
    emp.id=1;
    emp.salary=5000;
    printf("\nBy Value  \n");
    printEmpByVal(emp);
    printf("\nBy Reference \n");
    emp.id=10;
    printEmpByRef(emp);

    printf("\nBy Pointer  \n");

    printEmpByPointer(&emp);
    emp.id=15;
    printf("\n###############################\n");


    return 0;
}
