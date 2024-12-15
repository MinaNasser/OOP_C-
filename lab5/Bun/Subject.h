#ifndef SUBJECT_H_INCLUDED
#define SUBJECT_H_INCLUDED

#include <iostream>

using namespace std;
struct Subject {
private:
    string name;
    int grade;

public:


    // Constructor
    Subject(string subjectName, int subjectGrade) {
        name = subjectName;
        grade = subjectGrade;
    }

    // Method to get the name of the subject
    string getName() const {
        return name;
    }

    // Method to get the grade of the subject
    int getGrade() const {
        return grade;
    }
};

#endif // SUBJECT_H_INCLUDED


/*#ifndef SUBJECT_H_INCLUDED
#define SUBJECT_H_INCLUDED



#include <iostream>

using namespace std;

struct Subject {
    int rollNumber;
    float marks;
    int numRolls;
    int numMarks;


    Subject(int numRolls, int numMarks, int* r, float* m) {
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


    ~Subject() {
        delete[] rollNumber;
        delete[] marks;
    }
};

#endif // SUBJECT_H_INCLUDED
*/
