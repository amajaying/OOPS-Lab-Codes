#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks[5];
    int total;
    float percentage;
    void getInput(){
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter roll no: ";
        cin>>roll;
        cout<<"Enter 5 subjects marks: ";
        for(int i=0; i<5; i++){
            cin>>marks[i];
        }
    }
    void calc(){
        total = 0;
        for(int i = 0; i < 5; i++){
            total = total + marks[i];
        }
        percentage = total/5;
    }  
    void display(){
        cout<<endl<<endl<<"The details of "<<name<<" are: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Total Marks: "<<total<<endl;
        cout<<"Percentage: "<<percentage<<"%"<<endl<<endl;
    }
};
int main(){
    Student ajay;
    ajay.getInput();
    ajay.calc();
    ajay.display();
}