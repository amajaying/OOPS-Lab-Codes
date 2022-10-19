// Create a class which a complex number. Add two objects and display the resultant object. Overload the ++ (post and pre) operator for the class.
#include<iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;
    
    public:
    Complex(){
        real=0;
        img=0;
    }
    Complex(int r,int i){
        real=r;
        img=i;
    }
    void display(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imaginary: "<<img<<endl;
    }
    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
    Complex operator++(){
        Complex temp;
        temp.real=++real;
        temp.img=++img;
        return temp;
    }
    Complex operator++(int){
        Complex temp;
        temp.real=real++;
        temp.img=img++;
        return temp;
    }
};

int main(){
    Complex c1(10,20),c2(30,40),c3;
    c3=c1+c2;
    c3.display();
    c3=++c1;
    c3.display();
    c3=c1++;
    c3.display();
    return 0;
}
