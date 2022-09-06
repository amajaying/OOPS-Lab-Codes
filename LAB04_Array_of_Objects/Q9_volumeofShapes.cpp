#include <iostream>
using namespace std;
class Volume
{ 
    public:

    //vol of cube
    float vol(float l)
    {
        return l * l * l;
    }

    //vol of cylinder
    float vol(float pi, float r, float h){
        return pi * r*r*h;
    }

    //vol of sphere
    float vol (float pi, float rr){
        float volll =  (4/3.0)*pi*rr*rr*rr;
        return volll;
    }

};

int main(){
    Volume vv;
    float l, r, h, rr;
    float pi = 22/7.0; 
    cout<<"Enter length of a cube: ";
    cin>>l;
    cout<<"Enter radius and height of a cylinder: ";
    cin>>r>>h;
    cout<<"Enter radius of a sphere: ";
    cin>>rr;

    cout<<"Volume of cube: "<<vv.vol(l)<<endl;
    cout<<"Volume of cylinder: "<<vv.vol(pi,r,h)<<endl;
    cout<<"Volume of sphere: "<<vv.vol(pi,rr)<<endl;
}