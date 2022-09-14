// create two classes which stores distance in feet, inches and meter, centimeter format respectively. Write a function which compares distance in object of these classes and displays the larger one.

#include<iostream>
using namespace std;

class FeetInch{
    public:
    int feet;
    int inches;

    FeetInch(){
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inch: ";
        cin>>inches;
    }
};

class MeterCm{
    public:
    int meter;
    int centimeter;

    MeterCm(){
        cout<<"Enter meter: ";
        cin>>meter;
        cout<<"Enter centimeter: ";
        cin>>centimeter;
    }
};

int main(){
    FeetInch f;
    MeterCm m;
    int a = (f.feet*12 + f.inches)/2.54;
    int b = m.meter*100+m.centimeter;
    if(a>b){
        cout<<"Larger one is "<< f.feet<<" feet and "<<f.inches<<" inches"<<endl;
    }
    else{
        cout<<"Larger one is "<< m.meter<<" meter and "<<m.centimeter<<" centimeter"<<endl;
    }
}

