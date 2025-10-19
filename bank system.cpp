#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string name;
    int accountNumber;
    double balance;

    Account(string n, int accNum, double bal) {
        name = n;
        accountNumber = accNum;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: $" << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        }
        else {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        }
    }

    void display() {
        cout << "Account: " << accountNumber << " | Name: " << name << " | Balance: $" << balance << endl;
    }
};

int main() {
    Account acc1("Zeinab", 101, 500.0);
    int choice;
    double amount;

    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display\n0. Exit\nChoose an option: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc1.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc1.withdraw(amount);
            break;
        case 3:
            acc1.display();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid option!" << endl;
        }
    } while (choice != 0);

    return 0;
}