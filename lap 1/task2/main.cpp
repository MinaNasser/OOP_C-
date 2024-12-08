#include <iostream>
#include <stdio.h>
using namespace std;
#define NL "\n"



/*
task 1,3 ,4,5

*/



namespace STD {
    struct Stream {
       Stream& operator<<(string val) {
            printf("%s", val.c_str());
        }


        void operator <<(int val){
            printf("%d",val);
        }
    };
    Stream COUT;
}
using namespace STD;
int main() {

    int x;
    cin >> x;
    COUT << "Hello from name space \n" <<5 ;

    cout<<"End Line"<<NL;
    return 0;
}
