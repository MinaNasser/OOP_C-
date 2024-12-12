#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Student {
private:
    int studentID;
    string name;
    int grade;

public:

    Student();

    Student(int id, string studentName, int studentGrade);
    int getStudentID();
    string getName();
    int getGrade();
    void promote();

    void displayStudentInfo();
};

#endif // STUDENT_H_INCLUDED
