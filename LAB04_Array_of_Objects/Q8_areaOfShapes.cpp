#include <iostream>
#include <cmath>
using namespace std;
const float pi = 22 / 7;


class Area
{
public:
    void area(float r)
    {
        float pi = 3.14285;
        float a = pi * r * r;
        cout<<"Area of circle = "<<a<<endl;
    }

    void area (int l, int br){
        int ab = l*br;
        cout<<"Area = "<<ab<<endl;
    }
    void area (float a, float b, float c){
        
        float s = (a+b+c)/2;
        float aa = s*(s-a)*(s-b)*(s-c);
        cout<<"Area of triangle = "<<sqrt(aa)<<endl;
    }
};

int main(){
    Area ar;
    float r;
    int l,br;
    float a,b,c;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Enter length and breadth of rectangle or square: ";
    cin>>l>>br;
    cout<<"Enter 3 sides of triangle: ";
    cin>>a>>b>>c;
    ar.area(r);
    ar.area(l,br);
    ar.area(a,b,c);
}