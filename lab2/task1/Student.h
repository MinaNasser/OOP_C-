#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
using namespace std;
struct Student {
private:
    string name;
    int rollNumber;
    char grade;
public:
    void setName(string _name);
    void setRollNumber(int _rollNumber) ;
    void setGrade(char _grade) ;
    string getName() ;
    int getRollNumber() ;
    char getGrade() ;
    void displayInfo () ;
};


#endif // STUDENT_H_INCLUDED
