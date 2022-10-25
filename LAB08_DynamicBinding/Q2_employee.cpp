// Create a class which stores employee name,id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour. Calculate the salary of a regular employee and a part-time employee, using virtual function

#include<iostream>
using namespace std;

class Employee{
    public:
    string name;
    int id;
    float salary;
    
    void getData(string n, int i, float s){
        name = n;
        id = i;
        salary = s;
    }
    virtual void calculateSalary() = 0;
    virtual void display() = 0;
};

class Regular: public Employee{
    float da, hra, basic;
    public:
    void gData(string name, int id, float salary, float d, float h, float b){
        Employee::getData(name, id, salary);
        da = d;
        hra = h;
        basic = b;
    }
    void calculateSalary(){
        salary = da + hra + basic;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

class PartTime: public Employee{
    int hours;
    float payPerHour;
    public:
    void gData(string name, int id, float salary, int h, float pph){
        Employee::getData(name, id, salary);
        hours = h;
        payPerHour = pph;
    }
    void calculateSalary(){
        salary = hours * payPerHour;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Regular r;
    PartTime p;
    r.gData("Ajay", 1, 0, 1000, 2000, 3000);
    p.gData("Unik", 3, 0, 10, 100);
    r.calculateSalary();
    p.calculateSalary();
    r.display();
    p.display();
    return 0;
}
