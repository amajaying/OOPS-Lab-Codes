#include <iostream>
using namespace std;
#define n 10

class Complex{
    int real[n];
    int imaginary[n];
    public:
    void takeInput(){
        cout << "Enter real part followed by imaginary (10 numbers): ";
        for(int i=0; i<n; i++){
            cout<<"Enter real part of complex number "<<i+1<<": ";
            cin>>real[i];
            cout<<"Enter imaginary part of complex number "<<i+1<<": ";
            cin>>imaginary[i];
        }
    }

    void display(){
        cout<<"The numbers are: "<<endl;
        for(int i=0; i<n; i++){
            cout<<real[i]<<"+"<<imaginary[i]<<"i"<<endl;
        }
    }
};

int main(){
    Complex a;
    a.takeInput();
    a.display();
}