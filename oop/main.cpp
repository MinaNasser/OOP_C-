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

void swap(int &x, int &y){
    int temp = x;
    x=y;
    y=temp;
}

int main()
{
    return 0;
}

/*



int x =1000;
    int& z = x;
    //reference is allias for variable 
    //not in & address of variable
    // to name to the same location in memory

    cout<<"Value "<<x<<endl;
    cout<<"reference "<<z<<endl;
int a= add(1,2);
    float netSalary = calaculatNetSalary(1000);
    float netSalary2 = calaculatNetSalary(1000,500);
    cout<<a<<endl;
    cout<<netSalary<<endl;
    cout<<netSalary2<<endl;


    int *p =new int[3];
    int *p2 =new int(10);
    *p=10;
    *(p+1)=15;
    *(p+2)=20;
    for (size_t i = 0; i < 3; i++)
    {
        
        cout<<*(p+i)<<endl;
    }

    cout<<"Value of int "<<*p2<<endl;

    delete p;


    */