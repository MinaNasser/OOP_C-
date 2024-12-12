#include <iostream>
#include"person.h"
using namespace std;

int main()
{
    Person p;
    p.setName("John");
    p.setPhoneNum(1234567890);
    p.setEmail("john@example.com");
    p.displayContactInfo();
    return 0;
}
