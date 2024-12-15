#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>

using namespace std;

struct Student {
private:
    string name;
    int* rollNumber;
    float* marks;     
    int numRolls;     
    int numMarks;    

public:
 
    Student(string n, int numRolls, int numMarks, int* r, float* m) {
        name = n;
        this->numRolls = numRolls;
        this->numMarks = numMarks;
        rollNumber = new int[numRolls];
        for (int i = 0; i < numRolls; ++i) {
            rollNumber[i] = r[i];  
        }

        marks = new float[numMarks];
        for (int i = 0; i < numMarks; ++i) {
            marks[i] = m[i];  
        }
    }


    void addSubject(int roll, float mark) {
        int* newRollNumber = new int[numRolls + 1];
        for (int i = 0; i < numRolls; ++i) {
            newRollNumber[i] = rollNumber[i];  
        }
        newRollNumber[numRolls] = roll;  
        delete[] rollNumber;  
        rollNumber = newRollNumber; 
        float* newMarks = new float[numMarks + 1];
        for (int i = 0; i < numMarks; ++i) {
            newMarks[i] = marks[i]; 
        }
        newMarks[numMarks] = mark; 
        delete[] marks;  
        marks = newMarks; 

        numRolls++;  
        numMarks++;  
    }


    Student() {
        name = "";
        rollNumber = nullptr;
        marks = nullptr;
        numRolls = 0;
        numMarks = 0;
    }
    Student(const Student& other) {
        name = other.name;
        numRolls = other.numRolls;
        numMarks = other.numMarks;
        rollNumber = new int[numRolls];
        for (int i = 0; i < numRolls; ++i) {
            rollNumber[i] = other.rollNumber[i];  
        }

        marks = new float[numMarks];
        for (int i = 0; i < numMarks; ++i) {
            marks[i] = other.marks[i];  
        }
    }

    void setName(string n) {
        name = n;
    }
    void setRollNumbers(int* r, int num) {
        if (rollNumber != nullptr) {
            delete[] rollNumber;  
        }
        numRolls = num;
        rollNumber = new int[numRolls]; 
        for (int i = 0; i < numRolls; ++i) {
            rollNumber[i] = r[i];  
        }
    }

    void setMarks(float* m, int num) {
        if (marks != nullptr) {
            delete[] marks;  
        }
        numMarks = num;
        marks = new float[numMarks];  
        for (int i = 0; i < numMarks; ++i) {
            marks[i] = m[i];  
        }
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Roll Numbers: ";
        for (int i = 0; i < numRolls; ++i) {
            cout << rollNumber[i] << " ";  
        }
        cout << endl;

        cout << "Marks: ";
        for (int i = 0; i < numMarks; ++i) {
            cout << marks[i] << " ";  
        }
        cout << endl;
    }

    ~Student() {
        delete[] rollNumber;  
        delete[] marks;       
    }
};

#endif // STUDENT_H_INCLUDED
