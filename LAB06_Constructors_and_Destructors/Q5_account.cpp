// Create a class which stores account number, customer name and balance. Derive two
// classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores
// minimum balance. The ‘Current’ class stores the over-due amount. Include member
// functions in the appropriate class for
// -deposit money
// -withdraw [For saving account minimum balance should be checked.]
// [For current account overdue amount should be calculated.]
// -display balance
// Rewrite the assignment vii. From Inheritance including the parameterized constructors in
// all the classes.

#include<iostream>
#include<string.h>
using namespace std;

class Account{
    private:
    int account_no;
    char name[20];
     public:
    float balance;
   
    Account(int a, char *n, float b){
        account_no = a;
        strcpy(name,n);
        balance = b;
    }
    void deposit(float amount){
        balance += amount;
        cout<<endl<<"Balance deposited: "<<amount<<endl;
    }
    void display(){
        cout<<"Account number: "<<account_no<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class Savings: public Account{
    private:
    float min_balance;
    public:
    Savings(int a, char *n, float b, float m): Account(a, n, b){
        min_balance = m;
    }
    void withdraw(float amount){
        if(balance - amount < min_balance){
            cout<<"Insufficient balance."<<endl;
        }
        else{
            balance -= amount;
            cout<<endl<<"Balance withdrawn: "<<amount<<endl;
        }
    }
};

class Current: public Account{
    private:
    float overdue_amount;
    public:
    Current(int a, char *n, float b, float o): Account(a, n, b){
        overdue_amount = o;
    }
    void withdraw(float amount){
        if(balance - amount < overdue_amount){
            cout<<"Insufficient balance."<<endl;
        }
        else{
            balance -= amount;
            cout<<endl<<"Balance withdrawn: "<<amount<<endl<<endl;
        }
    }
};

int main(){
    Savings s(1, "Ajay", 1200, 500);
    Current c(2, "Bipin", 1900, 500);
    s.deposit(1800);
    c.deposit(4300);
    s.withdraw(1700);
    c.withdraw(2000);
    s.display();
    c.display();
    return 0;
}
