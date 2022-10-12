// WAP to demonstrate the order of call of constructors and destructors in case of virtual
// base class .
#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"Class A Constructor called."<<endl;
    }

    ~A(){
        cout<<"Class A Destructor called."<<endl;
    }
};

class B: virtual public A{
    public:
    B(){
        cout<<"Class B Constructor called."<<endl;
    }
    ~B(){
        cout<<"Class B Destructor called."<<endl;
    }
};

class C: public B{
    public:
    C(){
        cout<<"Class C Constructor called."<<endl;
    }
    ~C(){
        cout<<"Class C Destructor called."<<endl;
    }
};
int main(){
    C obj;
    return 0;
}


