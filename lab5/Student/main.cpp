#include <iostream>
#include"Student.h"

using namespace std;


int main() {
    int rollNumbers1[] = {101, 102};
    float marks1[] = {85.5, 90.0};
    Student student1("Ahmed", 2, 2, rollNumbers1, marks1);
        cout << "Student 1 Info:" << endl;
    student1.displayInfo();
    student1.addSubject(103, 88.5);
    cout << "\nStudent 1 Info (after adding new subject):" << endl;
    student1.displayInfo();

    return 0;
}
