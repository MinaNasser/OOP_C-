#ifndef SINGLTON_H_INCLUDED
#define SINGLTON_H_INCLUDED

#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instances[5];
    static int count;


    Singleton() {
        cout << "Singleton Created" << endl;
    }

public:

     static Singleton* getInstance(int index) {
        if (index < 0 || index >= 5) {
            cout << "Index out of range!" << endl;
            return nullptr;
        }

        if (instances[index] == nullptr) {
            instances[index] = new Singleton();
            count++;
        }

        return instances[index];
    }


    void show() {
        cout << "Singleton Instance" << endl;
    }
};

#endif // SINGLTON_H_INCLUDED
