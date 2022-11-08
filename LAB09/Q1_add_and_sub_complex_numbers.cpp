// WAP to add and subtract two complex numbers using Binary Operator Overloading.

#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r=0, int i=0){
        real=r;
        img=i;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator+(Complex c2){
        Complex temp;
        temp.real=real+c2.real;
        temp.img=img+c2.img;
        return temp;
    }
    Complex operator-(Complex c2){
        Complex temp;
        temp.real=real-c2.real;
        temp.img=img-c2.img;
        return temp;
    }
};

int main(){
    Complex c1(10,5), c2(2,4), c3;
    c3=c1+c2;
    c1.display();
    c2.display();
    cout<<"Adding: ";
    c3.display();
    c3=c1-c2;
    cout<<"Subtracting: ";
    c3.display();
    return 0;
}