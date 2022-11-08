// Overload unary minus operator using member function

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
        if(img>0)
            cout<<real<<" + "<<img<<"i"<<endl;
        else    
            cout<<real<<" "<<img<<"i"<<endl;
    }
    Complex operator-(){
        Complex temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }
};

int main(){
    Complex c1(10,5), c2;
    c2=-c1;
    c1.display();
    cout<<"Unary Minus: ";
    c2.display();
    return 0;
}