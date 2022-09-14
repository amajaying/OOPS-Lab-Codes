#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    long int phone;
    string address;
    void get_data(){
        cout<<"Enter details for "<<name<<": "<<endl;
        cout<<"Roll: ";
        cin>>roll;
        cout<<"Phone: ";
        cin>>phone;
        cout<<"Address: ";
        cin>>address;
    }
    void print_data(){
        cout<<"The details of "<<name<<": "<<endl;
        cout<<"Roll: "<<roll<<endl;
        cout<<"Phone: "<<phone<<endl;
        cout<<"Address: "<<address<<endl<<endl;
    }
};

int main(){
    Student s[2];
    s[0].name = "Sam";
    s[1].name = "John";
    for(int i=0; i<2; i++){
        s[i].get_data();
    }
    cout<<endl<<endl;
     for(int i=0; i<2; i++){
        s[i].print_data();
    }
}