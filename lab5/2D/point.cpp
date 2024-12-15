#include <iostream>
#include "Point.h"
using namespace std;

Point:: Point (int xVal, int yVal){
    this->x = xVal;
    this->y = yVal;
}

Point:: Point (){
    this->x = 0;
    this->y = 0;
}


int  Point:: getX()  {
     return x;
}
int Point::  getY()  {
    return y;
}

Point Point:: operator+( Point& other) {
    Point result;
    result.x = this->x + other.x;
    result.y = this->y + other.y;
    return result;
}
void Point:: display()  {
    cout << "(" << x << ", " << y << ")" << endl;
}
