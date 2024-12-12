#include "Student.h"

int main() {
    Student student1;
    cout << "Default Student Info:" << endl;
    student1.displayStudentInfo();

    Student student2(101, "Mina Nasser", 10);
    cout << "\nInitialized Student Info:" << endl;
    student2.displayStudentInfo();
    cout << "\nPromoting the student..." << endl;
    student2.promote();
    cout << "\nStudent Info After Promotion:" << endl;
    student2.displayStudentInfo();

    return 0;
}
