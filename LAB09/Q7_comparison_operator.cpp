// WAP to overload the comparison operator (==) using member function.

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
    bool operator==(Complex c2){
        if(real==c2.real && img==c2.img)
            return true;
        else
            return false;
    }
};

int main(){
    Complex c1(10,5), c2(10,5), c3(10,6);
    if(c1==c2)
        cout<<"c1 and c2 are equal"<<endl;
    else
        cout<<"c1 and c2 are not equal"<<endl;
    if(c1==c3)
        cout<<"c1 and c3 are equal"<<endl;
    else
        cout<<"c1 and c3 are not equal"<<endl;
    return 0;
}