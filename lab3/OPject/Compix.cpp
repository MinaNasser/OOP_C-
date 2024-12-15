#include<iostream>
#include "Complix.h"
using namespace std;

// Constructors
Complix::Complix() {
    this->real = 0;
    this->imag = 0;
    this->values = new int[10]; // تخصيص الذاكرة لمصفوفة القيم
}

Complix::Complix(int real, int imag) {
    this->real = real;
    this->imag = imag;
    this->values = new int[10]; // تخصيص الذاكرة لمصفوفة القيم
}

// Print function
void Complix::print() {
    cout << this->real << "+" << this->imag << "i" << endl;
}

// Getter and Setter functions
void Complix::setReal(int real) {
    this->real = real;
}

void Complix::setImag(int imag) {
    this->imag = imag;
}

int Complix::getReal() {
    return this->real;
}

int Complix::getImag() {
    return this->imag;
}

// Add functions
Complix Complix::Add(Complix a, Complix b) {
    Complix result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complix Complix::Add(Complix a) {
    real = real + a.real;
    imag = imag + a.imag;
    return *this;
}

// Operator overloading

// Complix + Complix
Complix Complix::operator+(Complix a) {
    this->real = this->real + a.real;
    this->imag = this->imag + a.imag;
    return *this;
}

// Complix + int
Complix Complix::operator+(int x) {
    this->real = this->real + x;
    this->imag = this->imag + x;
    return *this;
}

// Prefix ++Complix
Complix Complix::operator++() {
    this->real = this->real + 1;
    this->imag = this->imag + 1;
    return *this;
}

// Postfix Complix++
Complix Complix::operator++(int) {
    Complix temp = *this;
    this->real = this->real + 1;
    this->imag = this->imag + 1;
    return temp;
}

// Prefix --Complix
Complix Complix::operator--() {
    this->real = this->real - 1;
    this->imag = this->imag - 1;
    return *this;
}

// Postfix Complix--
Complix Complix::operator--(int) {
    Complix temp = *this;
    this->real = this->real - 1;
    this->imag = this->imag - 1;
    return temp;
}

// Comparison operators

// Complix == Complix
bool Complix::operator==(Complix a) {
    return (this->real == a.real && this->imag == a.imag);
}

// Complix != Complix
bool Complix::operator!=(Complix a) {
    return (this->real != a.real || this->imag != a.imag);
}

// Assignment operator (Deep Copy)
Complix Complix::operator=(Complix a) {
    if (this == &a) return *this; // Prevent self-assignment
    this->real = a.real;
    this->imag = a.imag;
    // Handle deep copy for values if necessary
    if (this->values != nullptr) {
        delete[] this->values;  // Delete old values if any
    }
    this->values = new int[10]; // Re-allocate memory
    for (int i = 0; i < 10; i++) {
        this->values[i] = a.values[i];
    }
    return *this;
}

// // Friend function to overload + (Complix + Complix)
Complix operator+(int  a, Complix b) {
    Complix result;
    result.real = a +b.getReal();
    result.imag = a + b.getImag();
    return result;
}

// Standalone function for int + Complix
Complix operator+(int num, const Complix &complix) {
    return Complix(num + complix.getReal(), complix.getImag());
}

// Standalone function for Complix + int
Complix operator+(const Complix &complix, int num) {
    return Complix(complix.getReal() + num, complix.getImag());
}

// Destructor
Complix::~Complix() {
    cout << "Destructor called" << endl;
    if (values != nullptr) {
        delete[] values; // تحرير الذاكرة المخصصة للمصفوفة
    }
}
