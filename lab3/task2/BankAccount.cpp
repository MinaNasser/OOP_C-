#include<iostream>
#include "BankAccount.h"
using namespace std;
    BankAccount::BankAccount(){
       accountNumber="111";
        this->accountHolderName="Mina";
        this->balance=2200;
    }
    BankAccount::BankAccount(string accNum, string holderName, double initialBalance){
        if(accNum.size()>0){
            this->accountNumber = accNum;
        }else{
            cout<<"Invalid number"<<endl;
        }
        if(holderName.size()>0){
            this->accountHolderName = holderName;
        }else{
            cout<<"Invalid name"<<endl;
        }
        if(initialBalance>=0){
            this->balance = initialBalance;
        }else{
            cout<<"Invalid balance"<<endl;
        }

    }

    bool BankAccount:: withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            return true;
        }
        return false;
    }
    string BankAccount:: getAccountNumber(){
        return accountNumber;
    }
    string BankAccount:: getAccountHolderName() {
        return accountHolderName;
        }
    double BankAccount::getBalance()  {
         return balance;
    }
    void BankAccount::deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
    void BankAccount::displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }
