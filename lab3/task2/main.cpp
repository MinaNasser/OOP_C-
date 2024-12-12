#include <iostream>

using namespace std;
#include "BankAccount.h"

int main()
{
    BankAccount account("123456789", "John Doe", 1000.0);
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Account Holder: " << account.getAccountHolderName() << endl;
    cout << "Balance: " << account.getBalance() << endl;
    account.displayAccountInfo();

    BankAccount b= BankAccount();
    b.displayAccountInfo();
    return 0;
}
