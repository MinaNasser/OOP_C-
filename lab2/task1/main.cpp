#include <iostream>

using namespace std;
#include "Student.h"


int main()
{
    Student student;
    student.setName("John Doe");
    student.setRollNumber(12345);
    student.setGrade('A');
    cout<<"Student Information: use getter "<<endl;
    cout<<student.getName()<<endl;
    cout<<student.getRollNumber()<<endl;
    cout<<student.getGrade()<<endl;

    cout<<"Student Information:"<<endl;
    student.displayInfo();
    return 0;
}
