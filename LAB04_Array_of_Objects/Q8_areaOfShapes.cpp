#include <iostream>
using namespace std;
const float pi = 22 / 7;
class Area
{ 
    public:
    int area(int r)
    {
        return pi * r * r;
    }

    int area(int l, int b)
    {
        return l * b;
    }

    float area(int a, int b, int c)
    {
        float s = (a + b + c) / 2;
        float area = s * (s - a) * (s - b) * (s - c);
        return area;
    }
};

int main(){
    Area aa;
    int r, l, br, a, b, c;
    cout<<"Enter radius of a circle: ";
    cin>>r;
    cout<<"Enter length and breadth of a rectangle or square: ";
    cin>>l>>br;
    cout<<"Enter 3 sides of a triangle: ";
    cin>>a>>b>>c;

    cout<<"Area of circle: "<<aa.area(r)<<endl;
    cout<<"Area of rectangle/square: "<<aa.area(l,br)<<endl;
    cout<<"Area of triangle: "<<aa.area(a,b,c)<<endl;
}