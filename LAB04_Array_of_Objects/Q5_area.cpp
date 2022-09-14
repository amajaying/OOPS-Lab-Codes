#include <iostream>
using namespace std;

class Area{
    public:
    int length;
    int breadth;

    void setDim(int l, int b){
        cout<<"Enter length: ";
        cin>>l;
        length=l;
        
        cout<<"Enter breadth: ";
        cin>>b;
        breadth=b;
    }
    int getArea(){
        return length*breadth;
    }
};

int main(){
    Area a;
    a.setDim(a.length, a.breadth);
    cout<<"The area of rectangle is: " << a.getArea()<<endl;
}