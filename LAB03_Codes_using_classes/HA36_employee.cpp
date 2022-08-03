#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
    string name;
    int age;
    int basicSal;
    int gross;

    void takeInput(){
            cout<<"Enter details of employee:"<<endl;
            cout<<"Enter id: ";
            cin>>id;
            cout<<"Enter name: ";
            cin.ignore();
            getline(cin, name);
            cout<<"Enter age: ";
            cin>>age;
            cout<<"Enter basic salary: ";
            cin>>basicSal;
            cout<<endl;
    }

    void calc(){
            gross = basicSal + (0.8*basicSal) + (0.1*basicSal);
    }

    void display(){
            cout<<"Id: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Basic Salary: "<<basicSal<<endl;
            cout<<"Gross Salary: "<<gross<<endl<<endl;
    }
};

int main(){
    int n;
    cout << "Enter the no of employees: ";
    cin>>n;
    Employee abc[n];
    for(int i=0; i<n; i++){
        abc[i].takeInput();
        abc[i].calc();
    }
    cout<<endl<<"The details of employees are: "<<endl;
    for(int i=0; i<n; i++){
        abc[i].display();
    }
}