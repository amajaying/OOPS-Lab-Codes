#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll; 
    int age;
};

class test:public Student{
    public:
    int marks[5];
    void input(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll: ";
        cin>>roll;
        cout<<"Age: ";
        cin>>age;
        cout<<"Enter 5 marks: ";
        for(int i=0; i<5; i++)
            cin>>marks[i];
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"5 Marks are: "<<endl;
        for(int i=0; i<5; i++)
            cout<<marks[i]<<"\t";

        cout<<endl;
    }
};

int main(){
    test t;
    t.input();
    cout<<endl<<"The details of student are: "<<endl;
    t.display();
    return 0;
}