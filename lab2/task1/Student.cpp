#include <iostream>

using namespace std;
#include "Student.h"

    void Student:: setName(string _name){
        if(_name.size()>0){
            this->name = _name;
        }

    }
    void  Student:: setRollNumber(int _rollNumber) {
        if (_rollNumber>0)
        {
            rollNumber = _rollNumber;
        }
        else
        {
            cout<<"Invalid roll number"<<endl;
        }
    }
    void Student::  setGrade(char _grade) {
        switch (_grade){
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
                grade = _grade;
                break;
            default:
                cout<<"Invalid grade"<<endl;
                break;
        }
    }
    string Student::  getName() {
        return name;
    }
    int Student::  getRollNumber() {
        return rollNumber;
    }
    char  Student:: getGrade() {
        return grade;
    }
    void  Student::  displayInfo () {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
