#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    long long accountNumber;
    double balance;

public:
    BankAccount(string name, long long accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal failed." << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balance << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    string name;
    long long accNumber;
    double initialBalance;

    cout << "Enter Account Holder Name: ";
    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accNumber;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account(name, accNumber, initialBalance);

    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
           
