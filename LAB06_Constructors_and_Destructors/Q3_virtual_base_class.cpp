// WAP to demonstrate the order of call of constructors and destructors in case of virtual base class .
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

class B: virtual public A{
    public:
    B(){
        cout<<"Second Base Constructor called."<<endl;
    }
    ~B(){
        cout<<"Second Base Destructor called."<<endl;
    }
};

class C: virtual public A{
    public:
    C(){
        cout<<"Third Base Constructor called."<<endl;
    }
    ~C(){
        cout<<"Third Base Destructor called."<<endl;
    }
};

class D: public B, public C{
    public:
    D(){
        cout<<"Derived Constructor called."<<endl;
    }
    ~D(){
        cout<<"Derived Destructor called."<<endl;
    }
};

int main(){
    D obj;
    return 0;
}



