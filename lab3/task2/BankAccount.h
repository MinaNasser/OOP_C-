#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED

#include <iostream>
using namespace std;


struct BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount();
    BankAccount(string accNum, string holderName, double initialBalance);

    bool withdraw(double amount) ;
    string getAccountNumber() ;
    string getAccountHolderName() ;
    double getBalance();
    void deposit(double amount);
    void displayAccountInfo();

};



#endif // BANKACCOUNT_H_INCLUDED
