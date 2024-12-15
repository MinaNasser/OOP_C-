#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int xVal, int yVal) ;
    Point();
    int getX();
    int getY();
    Point operator+( Point& other);
    void  display();
};





#endif // POINT_H_INCLUDED
