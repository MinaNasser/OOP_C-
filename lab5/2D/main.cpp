#include <iostream>
#include"Point.h"

using namespace std;

int main() {
    Point point1(2, 3);
    Point point2(4, 5);
    cout << "Point 1: ";
    point1.display();
    cout << "Point 2: ";
    point2.display();
    Point result = point1 + point2;
    cout << "Result of addition: ";
    result.display();

    return 0;
}
