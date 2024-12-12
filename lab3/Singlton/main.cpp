#include<iostream>
#include "Singlton.h"

using namespace std;

int main() {

    Singleton* obj1 = Singleton::getInstance();
    Singleton* obj2 = Singleton::getInstance();
    Singleton* obj3 = Singleton::getInstance();
    Singleton* obj4 = Singleton::getInstance();
    Singleton* obj5 = Singleton::getInstance();

    Singleton* obj6 = Singleton::getInstance();
    Singleton* obj7 = Singleton::getInstance();


    if (obj1) obj1->show();
    if (obj2) obj2->show();
    if (obj3) obj3->show();
    if (obj4) obj4->show();
    if (obj5) obj5->show();

    if (obj6) obj6->show();
    if (obj7) obj7->show();

    return 0;
}
