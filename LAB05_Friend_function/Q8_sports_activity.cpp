#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    
    int roll; 
    int age;
    int sportsMarks;
    int total;
    float percent;
};

class Sports: public Student{
    public:
    Sports(){
        cout<<"Enter marks in Sports: ";
        cin>>sportsMarks;
        // cout<<"Marks in Sports: "<<sportsMarks<<endl;
        total = total + sportsMarks;
    }
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
        total = 0;
        percent = 0;
        for(int i=0; i<5; i++){
            cin>>marks[i];
            total+=marks[i];
        }
        percent = total/5.0;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"5 Marks are: "<<endl;
        for(int i=0; i<5; i++)
            cout<<marks[i]<<"\t";

        cout<<endl;

        cout<<"Total: "<<total<<endl;
        cout<<"Percentage: "<<percent<<endl;
    }

};

int main(){
    test t;
    t.input();
    Sports s;
    cout<<endl<<"The details of student are: "<<endl;
    t.display();
    return 0;
}