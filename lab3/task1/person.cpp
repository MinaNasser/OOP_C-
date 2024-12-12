#include <iostream>
#include"person.h"

using namespace std;


void Person:: setName(string _name){
        if(_name.size()>0){
            this->name = _name;
        }else{
            cout<<"Invalid name"<<endl;
        }

    }

void  Person:: setPhoneNum(int phoneNum){
    if(phoneNum>0){
        this->phoneNum = phoneNum;
    }
    else{
        cout<<"Invalid phone number"<<endl;
    }
}
void  Person:: setEmail(string Email){
    if (Email.size()>0)
    {
        this->Email = Email;
    }
    else{
        cout<<"Invalid email"<<endl;
    }
    
}
string  Person:: getName(){
    return name;
}
int  Person:: getPhoneNum(){
    return phoneNum;
}
string  Person:: getEmail(){
    return Email;
}
void  Person:: displayContactInfo() {
    cout << "Name: " << name << endl;
    cout << "Phone Number: " << phoneNum << endl;
    cout << "Email: " << Email << endl;
    

}

