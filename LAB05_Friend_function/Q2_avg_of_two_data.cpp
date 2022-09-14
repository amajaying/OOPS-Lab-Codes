// wap to find the average of the private data members of two different classes using friend function.

#include<iostream>
using namespace std;
class A
{
    private:
        int num1;
    public:
        A()
        {
            cout<<"Enter the value of num1: ";
            cin>>num1;

        }
        friend void avg(A *num1, B *num2);
};
class B
{
    private:
        int num2;
    public:
        B()
        {
            cout<<"Enter the value of num2: ";
            cin>>num2;
        }
        
        friend void avg(A *num1, B *num2);
};

void avg(A *num1, B *num2){
    cout<<"Average is: "<< num1->
}


