#include <iostream>
#include "Complix.h"

using namespace std;

int main() {
    // إنشاء كائنات من النوع Complix
    Complix c1(3, 4); // عدد مركب 3 + 4i
    Complix c2(5, -2); // عدد مركب 5 - 2i
    
    // طباعة الأعداد المركبة
    cout << "c1: ";
    c1.print();
    
    cout << "c2: ";
    c2.print();

    // استخدام مشغلات الجمع +
    Complix c3 = c1 + c2; // c3 = c1 + c2
    cout << "c1 + c2 = ";
    c3.print();

    // استخدام مشغلات الجمع مع عدد صحيح
    Complix c4 = 10 + c1; // c4 = 10 + c1
    cout << "10 + c1 = ";
    c4.print();
    
    Complix c5 = c2 + 5; // c5 = c2 + 5
    cout << "c2 + 5 = ";
    c5.print();

    // استخدام مشغلات الزيادة
    ++c1; // الزيادة السابقة c1++
    cout << "After ++c1: ";
    c1.print();

    c2++; // الزيادة اللاحقة c2++
    cout << "After c2++: ";
    c2.print();

    // استخدام مشغلات النقصان
    --c1; // النقصان السابق c1--
    cout << "After --c1: ";
    c1.print();

    c2--; // النقصان اللاحق c2--
    cout << "After c2--: ";
    c2.print();

    // اختبار المقارنات
    if (c1 == c2) {
        cout << "c1 is equal to c2" << endl;
    } else {
        cout << "c1 is not equal to c2" << endl;
    }

    if (c3 != c4) {
        cout << "c3 is not equal to c4" << endl;
    } else {
        cout << "c3 is equal to c4" << endl;
    }

    // اختبار التخصيص
    Complix c6 = c1; // c6 = c1 (نسخ)
    cout << "c6 (after assignment from c1): ";
    c6.print();

    // اختبار التخصيص العميق
    Complix c7 = c2;
    c7 = c6; // تخصيص c6 إلى c7
    cout << "c7 (after deep assignment from c6): ";
    c7.print();

    return 0;
}
