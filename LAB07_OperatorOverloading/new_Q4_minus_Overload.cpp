// 1. WAP to overload unary minus(-) operator using friend function and member function.

#include <iostream>
using namespace std;

class Number{
    int num;
public:
    Number(int n){
        num = n;
    }
    void display(){
        cout << "Number = " << num << endl;
    }
    friend Number operator-(Number);
};

Number operator-(Number n){
    n.num = -n.num;
    return n;
}

int main(){
    Number n1(10), n2(-20);
    cout<<"Before Overloading"<<endl;
    n1.display();
    n2.display();
    n1 = -n1;
    n2 = -n2;
    cout<<"After Overloading"<<endl;
    n1.display();
    n2.display();
    return 0;
}