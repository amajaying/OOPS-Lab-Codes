// WAP to demonstrate the order of call of constructors and destructors in case of multi-
// level inheritance.
#include<iostream>
using namespace std;

class A{
    public:
    A(){
        cout<<"First Base Constructor called."<<endl;
    }

    ~A(){
        cout<<"First Base Destructor called."<<endl;
    }
};

class B: public A{
    public:
    B(){
        cout<<"Second Base Constructor called."<<endl;
    }
    ~B(){
        cout<<"Second Base Destructor called."<<endl;
    }
};

class C: public B{
    public:
    C(){
        cout<<"Derived Constructor called."<<endl;
    }
    ~C(){
        cout<<"Derived Destructor called."<<endl;
    }
};

int main(){
    C obj;
    cout<<"haha";
    return 0;
}

