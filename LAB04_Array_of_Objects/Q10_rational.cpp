#include<iostream>
using namespace std;

class Rational{
    public:
    int num1, num2, den1, den2;

    void get_data(){
        cout<<"Enter numerator of 1st num: ";
        cin>>num1;
        cout<<"Enter denominator of 1st num: ";
        cin>>den1;
        cout<<"Enter numerator of 2nd num: ";
        cin>>num2;
        cout<<"Enter denominator of 2nd num: ";
        cin>>den2;
    }
    int lcm()
    {
        int value;
        if (den1 > den2)
        {
            value = den1;
        }
        else
        {
            value = den2;
        }
        while (true)
        {
            if (value % den1 == 0 && value % den2 == 0)
            {
                return value;
                break;
            }
            value++;
        }
    }
    void sum(){
        int nans=0;
        int dans=0;
        if(den1==den2){
            dans = den1;
            nans = num1+num2;
        }
        else{
            dans = lcm();
            nans = (num1 * (dans / den1)) + (num2 * (dans / den2));
        }
        cout<<"Sum is: "<< nans<<"/"<<dans<<endl;
    }

    void diff(){
        int nans=0;
        int dans=0;
        if(den1==den2){
            dans = den1;
            nans = num1-num2;
        }
        else{
            dans = lcm();
            nans = (num1 * (dans / den1)) - (num2 * (dans / den2));
        }
        cout<<"Diff is: "<< nans<<"/"<<dans<<endl;
    }

    void prod(){
        int nans=1;
        int dans=1;
        nans = num1*num2;
        dans = den1*den2;
        cout<<"Product is: "<< nans<<"/"<<dans<<endl;
    }

    void div(){
        int nans=1;
        int dans=1;
        nans = num1*den2;
        dans = den1*num2;
        cout<<"Division is: "<< nans<<"/"<<dans<<endl;
    }
};
int main(){
    Rational r;
    r.get_data();
    r.sum();
    r.diff();
    r.prod();
    r.div();

    return 0;
}