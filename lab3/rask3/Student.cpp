#include "Student.h"

Student::Student() {
    studentID = 0;
    name = "Unknown";
    grade = 0;
}

Student::Student(int id, string studentName, int studentGrade) {
    if (id > 0) {
        studentID = id;
    } else {
        cout << "Invalid ID!" << endl;
    }

    if (!studentName.empty()) {
        name = studentName;
    } else {
        cout << "Invalid Name!" << endl;
    }

    if (studentGrade >= 0) {
        grade = studentGrade;
    } else {
        cout << "Invalid Grade!" << endl;
    }
}

int Student::getStudentID() {
    return studentID;
}

string Student::getName() {
    return name;
}

int Student::getGrade() {
    return grade;
}
void Student::promote() {
    grade++;
}

void Student::displayStudentInfo() {
    cout << "Student ID: " << studentID << endl;
    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
}
