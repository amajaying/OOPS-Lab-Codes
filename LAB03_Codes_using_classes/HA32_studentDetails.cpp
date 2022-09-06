#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int totalMarks;
    void getInput(){
        cout<<"Enter the name: ";
        getline(cin,name);
        cout<<"Enter roll no: ";
        cin>>roll;
        cout<<"Enter the total marks: ";
        cin>>totalMarks;
    }

    void display(){
        cout<<endl<<endl<<"The details of "<<name<<" are: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Total Marks: "<<totalMarks<<endl<<endl;
    }
};
int main(){
    Student ajay;
    ajay.getInput();
    ajay.display();
}