//Problem: Create a class Account with private balance, protected accountNumber, and public holderName.
// Show how to access each correctly

#include <iostream>
using namespace std;

class Account {
private:
    double balance;  // Private: accessible only within the class

protected:
    int accountNumber;  // Protected: accessible within class and derived classes

public:
    string holderName;  // Public: accessible from anywhere

    // Constructor to initialize all members
    Account(double bal, int accNum, string name) {
        balance = bal;
        accountNumber = accNum;
        holderName = name;
    }

    // Public member function
