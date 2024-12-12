#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <iostream>
using namespace std;
struct Person{
private:
    string name;
    int phoneNum;
    string Email;
public:
void setName(string name);
void setPhoneNum(int phoneNum);
void setEmail(string Email);
string getName();
int getPhoneNum();
string getEmail();
void displayContactInfo() ;

};


#endif // PERSON_H_INCLUDED
