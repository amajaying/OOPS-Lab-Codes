// Create a class student which stores name, roll number and age of a student. Derive a class test from student class, which stores marks in 5 subjects. Input and display the details of a student.
// Extend the program ii. of inheritance to include a class sports, which stores the marks in sports activity. Derive the result class from the classes ‘test’ and ‘sports’. Create objects using parameterized constructors .Calculate the total marks and percentage of a student.

#include<iostream>
#include<string.h>
using namespace std;

class student{
    private:
    char name[20];
    int roll_no;
    int age;
    public:
    student(char *n, int r, int a){
        strcpy(name, n);
        roll_no = r;
        age = a;
    }
};

class test: public student{
    private:
    int mark[5];
    public:
    test(char *n, int r, int a, int marks[]): student(n, r, a){
        for(int i=0; i<5; i++){
            mark[i] = marks[i]; 
        }
    }
};

class sports{
    private:
    int marks;
    public:
    sports(int m){
        marks = m;
    }
};

class result: public test, public sports{
    private:
    int total_marks;
    float percentage;
    public:
    result(char *n, int r, int a, int marks[], int m): test(n, r, a, marks), sports(m){
        total_marks = 0;
        for(int i=0; i<5; i++){
            total_marks += marks[i];
        }
        total_marks += m;
        percentage = (float)total_marks/6;
    }
    void display(){
        cout<<"Total marks: "<<total_marks<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};

int main(){
    char name[20];
    int roll_no, age, marks[5], m;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter roll number: ";
    cin>>roll_no;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter marks in 5 subjects: ";
    for(int i=0; i<5; i++){
        cin>>marks[i];
    }
    cout<<"Enter marks in sports: ";
    cin>>m;
    result obj(name, roll_no, age, marks, m);
    obj.display();
    return 0;
}