#include <iostream>
#include <fstream>
#include "Emplyee.h"
using namespace std;
Emplyee::Emplyee(){
    id=0;
    name=" ";
    salary=0;
}
Emplyee::Emplyee(int id,string name,float salary){
    Emplyee::setId(id);
    Emplyee::setName(name);
    Emplyee::setSalary(salary);
}
Emplyee::Emplyee(int id,string name){
    Emplyee::setId(id);
    Emplyee::setName(name);
    salary=0;
}
void Emplyee::setId(int id){
    if(id>0)
    this->id=id;
}
void Emplyee::setName(string name){
    if(name.length()>0)
    this->name=name;
}
void Emplyee::setSalary(float salary){
    if(salary>0)
    this->salary=salary;
}
int Emplyee::getId(){
    return id;
}
string Emplyee::getName(){
    return name;
}
float Emplyee::getSalary(){
    return salary;
}
void Emplyee::print(){
    cout<<"id: "<<id<<endl;
    cout<<"name: "<<name<<endl;
    cout<<"salary: "<<salary<<endl;
}
Emplyee::~Emplyee(){
    cout<<"object destroyed"<<endl;
    // write in file 
    ofstream file("Employee.txt",ios::app);
    file<<"Object destroyed  :"<<id<<" Name :"<<name<<" Salary :"<<salary<<endl;
    file.close();
}