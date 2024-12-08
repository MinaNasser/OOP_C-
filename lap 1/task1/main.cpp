#include <iostream>

using namespace std;
#define NL "\n"



int main()
{
    int x = 4;
    cout << "X before left shift: 00000100 " << x << NL;

    x = x << 1;

    cout << "X after left shift: 00001000 " << x << endl;
    return 0;
}
