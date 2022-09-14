// wap to find the average of the private data members of two different classes using friend function.

#include<iostream>
using namespace std;
class A{
    int a;
    public:
    friend void average(A,B);
};

class B{
    int b;
    public:
    friend void average(A,B);
};

void average(A a, B b){
    cout<<"Average of "<<"&"<<b.b<<"is "<< (b.b)/2;
}


