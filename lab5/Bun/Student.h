#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <vector>

#include "Subject.h"

using namespace std;
struct Student {
    string name;
    vector<Subject> subjects;  // Storing subjects

    // Constructor
    Student(string studentName) {
        name = studentName;
    }

    // Method to add a subject
    void addSubject(const Subject& subject) {
        subjects.push_back(subject);
    }

    // Method to get the number of subjects
    int getSubjectCount() const {
        return subjects.size();
    }

    // Method to get the name of a subject at a specific index
    string getSubjectName(int index) const {
        return subjects[index].getName();  // Assuming Subject has a method getName
    }

    // Method to get the grade of a subject at a specific index
    int getSubjectGrade(int index) const {
        return subjects[index].getGrade();  // Assuming Subject has a method getGrade
    }

    // Method to display the subjects and their grades
    void displaySubjects() const {
        cout << "Student: " << name << endl;
        for (int i = 0; i < getSubjectCount(); ++i) {
            cout << "Subject: " << getSubjectName(i) << ", Grade: " << getSubjectGrade(i) << endl;
        }
    }
};
#endif // STUDENT_H_INCLUDED
