/*
4. Program: Simple Bank Account Class
Statement: Define a class BankAccount with account holder’s name and balance. Show account details using a method.
*/

#include <iostream>
using namespace std;

class BankAccount {
public:
    string holderName;
    double balance;

    void displayDetails() {
        cout << "Account Holder: " << holderName << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    acc1.holderName = "John Doe";
    acc1.balance = 1500.75;

    acc1.displayDetails();
    return 0;
}

