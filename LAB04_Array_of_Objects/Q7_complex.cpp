#include <iostream>
using namespace std;

class Complex{
    public:
    int rnum1, rnum2; 
    int inum1, inum2;
    int rsum=0, isum=0;
    int rdiff=0, idiff=0;
    int rpro = 0, ipro=0;
    void getdata(){
        cout<<"Enter 1st real part: ";
        cin>>rnum1;
        cout<<"Enter 1st imaginary part: ";
        cin>>inum1;
        cout<<"Enter 2nd real part: ";
        cin>>rnum2;
        cout<<"Enter 2nd imaginary part: ";
        cin>>inum2;

    }

    void summ(){
        rsum = rnum1+rnum2;
        isum = inum1+inum2;
        cout<<"Sum = "<<rsum<<"+"<<isum<<"i"<<endl;
    }

    void diff(){
        rdiff = rnum1-rnum2;
        idiff = inum1-inum2;
        if(idiff<0)
            cout<<"Difference = "<<rdiff<<" "<<idiff<<"i"<<endl;  
        else  
            cout<<"Difference = "<<rdiff<<"+"<<idiff<<"i"<<endl;
    }

    void product(){
        // ac-bd, ad+bc
        rpro= (rnum1*rnum2) - (inum1*inum2);
        ipro = (rnum1*inum2) + (rnum2*inum1);
        cout<<"Product = "<<rpro<<"+"<<ipro<<"i"<<endl;
    }

};

int main(){
    Complex c;
    c.getdata();
    c.summ();
    c.diff();
    c.product();
}