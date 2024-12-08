#include <iostream>

using namespace std;
class Car
{
    int speed;
    char Color[20];
    void moveForward()
    {
        cout << "move forward" << endl;
    }

    void breakCar(){
        cout << "break" << endl;
    }
};

int add(int x, int y){
    return x+y;
}
float calaculatNetSalary(float salary, float bounas=150){
    return salary + bounas;
}

int main()
{
    int a= add(1,2);
    float netSalary = calaculatNetSalary(1000);
    float netSalary2 = calaculatNetSalary(1000,500);
    cout<<a<<endl;
    cout<<netSalary<<endl;
    cout<<netSalary2<<endl;
    return 0;
}
