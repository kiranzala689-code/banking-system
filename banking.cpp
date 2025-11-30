#include <iostream>
using namespace std;

class Bank {
private:
    string name;
    int accountno;
    float balance;

public:
    Bank(string n, int a, float b) {   // Constructor
        name = n;
        accountno = a;
        balance = b;
    }

    void deposit(float amt) {
        balance += amt;
        cout << "Amount Deposited!" << endl;
    }

    void withdraw(float amt) {
        if (amt <= balance) {
            balance -= amt;
            cout << "Amount Withdrawn!" << endl;
        } else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display() {
        cout << "\nAccount Holder: " << name << endl;
        cout << "Account No.: " << accountno << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    string name;
    int account;
    float balance, amount;
    int choice;

    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Account No: ";
    cin >> account;
    cout << "Enter  Balance: ";
    cin >> balance;

    Bank obj(name, account, balance);
        cout<< "press 1 for diposit amount \n";
        cout<< "press 2 for withdrow amount \n";
        cout<< "press 3 for display amount \n";
        cout<<"enter your choice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter amount: ";
            cin >> amount;
            obj.deposit(amount);
       }
        else if(choice==2){
            cout << "Enter amount: ";
            cin >> amount;
            obj.withdraw(amount);
        }
       else if(choice==3){
            obj.display();
       }
        else{
            cout << "Invalid Choice!";
        }
    

    return 0;
}
