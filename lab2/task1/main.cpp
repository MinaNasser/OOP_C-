#include <iostream>

using namespace std;
#include "Student.h"

void displayStudentInfo(Student s)
{
    cout << "Name: " << s.getName() << endl;
    cout << "Roll Number: " << s.getRollNumber() << endl;
    cout << "Grade: " << s.getGrade() << endl;
}

int main()
{
    cout << "Welcome to the Student Management System!" << endl;
    cout<<"--------------------------------------"<<endl;
    cout <<"Enter Number of Students: ";
    int numStudents;
    cin >> numStudents;
    Student   student [numStudents];

    int num=0;
    do
    {
        cout << "1- Add Student \n";
        cout << "2- Display Student Information \n";
        cout << "3- Exit \n";
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter student name: ";
            string name;
            cin >> name;
            cout << "Enter student roll number: ";
            int rollNumber;
            cin >> rollNumber;
            cout <<"Enter student grade: ";
            char grade;
            cin >> grade;
            student[num].setName(name);
            student[num].setRollNumber(rollNumber);
            student[num].setGrade(grade);
            num++;
        }
        else if (choice == 2)
        {
            for(int i=0 ;i<num;i++){
                displayStudentInfo(student[i]);
            }

        }
        else if (choice == 3)
        {
            break;
        }
        else{
            cout<<"Invalid choice. Please try again."<<endl;
        }

    } while (true);

        return 0;
}
/*Student student;
        student.setName("John Doe");
        student.setRollNumber(12345);
        student.setGrade('A');

        cout<<"Student Information: use getter \n"<<endl;
        cout<<"Student Name :"<<student.getName()<<endl;
        cout<<"Student RollNumber :"<<student.getRollNumber()<<endl;
        cout<<"Student Grade :"<<student.getGrade()<<endl<<"\n\n\n";

        cout<<"Student Information:"<<endl;
        student.displayInfo();
        cout<<"\n\n\n\nStudent Information: standalone function \n";
        displayStudentInfo(student);*/
