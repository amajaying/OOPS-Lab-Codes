#include <iostream>
using namespace std;

class Student{
    public:
    int roll;
    double marks;
    void getdata();
    void display();
};

void Student::getdata(){
    cout<<"Enter Roll: ";
    cin>>roll;
    cout<<"Enter marks: ";
    cin>>marks;
}

void Student::display(){
    cout<<roll<<" "<<marks<<endl;
}

int main(){
    int i;
    Student st[5];
    for(i=0; i<5; i++){
        st[i].getdata();
    }

    for(i=0; i<5; i++){
        st[i].display();
    }
}
