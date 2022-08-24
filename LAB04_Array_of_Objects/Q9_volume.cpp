#include<iostream>
using namespace std;

class Volume{
    public:
    void vol(int l){
        cout<<"Volume of cube: "<<l*l*l<<endl;
    }

    void vol(int r, int h, float pi){
        cout<<"Volume of cylinder: "<<pi*r*r*h<<endl;
    }

    void vol(float pi, int rs){
        cout<<"Volume of sphere: "<<(4/3)*pi*rs*rs*rs<<endl;
    }
};

int main(){
    int l;
    int r, h, rs;
    float pi = 22/7.0;
    cout<<"Enter side of cube: ";
    cin>>l;
    cout<<"Enter radius and height of cylinder: ";
    cin>>r>>h;
    cout<<"Enter radius of sphere: ";
    cin>>rs;
    Volume v;
    v.vol(l);
    v.vol(r,h,pi);
    v.vol(pi,rs);
}