#ifndef CALCULATOR_H_INCLUDED
#define CALCULATOR_H_INCLUDED

#include <iostream>
using namespace std;

struct Calculator {
    int add(int a, int b);
    double add(double a, double b);

    int subtract(int a, int b);
    double subtract(double a, double b);

    int multiply(int a, int b);
    double multiply(double a, double b);
};

#endif // CALCULATOR_H_INCLUDED
