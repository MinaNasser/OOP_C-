#include "Calculator.h"

int main() {
    Calculator calc;
    int intA = 10, intB = 5;
    cout << "Integer Operations:" << endl;
    cout << "Addition: 10 + 5  = " << calc.add(intA, intB) << endl;
    cout << "Subtraction:  10 - 5 = " << calc.subtract(intA, intB) << endl;
    cout << "Multiplication:  10 * 5 = " << calc.multiply(intA, intB) << endl;

    double doubleA = 10.5, doubleB = 2.3;
    cout << "\nDouble Operations:" << endl;
    cout << "Addition: 10.5 + 2.3 = " << calc.add(doubleA, doubleB) << endl;
    cout << "Subtraction: 10.5 + 2.3 = " << calc.subtract(doubleA, doubleB) << endl;
    cout << "Multiplication: 10.5 + 2.3 = " << calc.multiply(doubleA, doubleB) << endl;

    return 0;
}

