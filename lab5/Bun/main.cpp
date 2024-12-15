#include <iostream>
#include <fstream>
#include <string>
#include "student.h"
#include "subject.h"

using namespace std;

const int MAX_STUDENTS = 10;  // Maximum number of students that can be added

// Global array to store students (max 10 students in this example)
Student* students[MAX_STUDENTS];
int studentCount = 0;

// Function to add a new student
void addStudent() {
    string studentName;
    cout << "Enter student's name: ";
    cin >> studentName;

    Student* newStudent = new Student(studentName);  // Dynamically create a new student

    // Add subjects for the student
    string subjectName;
    int grade;
    char addMoreSubjects;

    do {
        cout << "Enter subject name: ";
        cin >> subjectName;
        cout << "Enter grade: ";
        cin >> grade;

        Subject newSubject(subjectName, grade);
        newStudent->addSubject(newSubject);

        cout << "Do you want to add another subject? (y/n): ";
        cin >> addMoreSubjects;

    } while (addMoreSubjects == 'y' || addMoreSubjects == 'Y');

    // Store the student in the array
    if (studentCount < MAX_STUDENTS) {
        students[studentCount] = newStudent;
        studentCount++;

        // Save the student to the file
        ofstream outFile("students.txt", ios::app);  // Open file in append mode
        if (outFile.is_open()) {
            outFile << studentName << endl;  // Save student name
            for (int i = 0; i < newStudent->getSubjectCount(); ++i) {
                outFile << newStudent->getSubjectName(i) << ": " << newStudent->getSubjectGrade(i) << endl;
            }
            outFile << "--------------------" << endl;
            outFile.close();
            cout << "Student added and saved to file successfully!" << endl;
        } else {
            cout << "Error opening file for writing!" << endl;
        }
    } else {
        cout << "Cannot add more students! Maximum limit reached." << endl;
    }
}

// Function to display all students
void displayAllStudents() {
    ifstream inFile("students.txt");  // Open file for reading
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            cout << line << endl;  // Display each line from the file
        }
        inFile.close();
    } else {
        cout << "Error opening file for reading!" << endl;
    }
}

void addMultipleStudents() {
    char addMoreStudents;
    do {
        addStudent();  // Call the addStudent function to add a single student

        cout << "Do you want to add another student? (y/n): ";
        cin >> addMoreStudents;

    } while (addMoreStudents == 'y' || addMoreStudents == 'Y');
}

int main() {
    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add student\n";
        cout << "2. Add multiple students\n";  // New option for adding multiple students
        cout << "3. Display all students\n";  // Display all students
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();  // Add a new student
                break;
            case 2:
                addMultipleStudents();  // Add multiple students
                break;
            case 3:
                displayAllStudents();  // Display all students from file
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);  // Continue until the user chooses to exit

    return 0;
}
