// WAP to overload following operators for class distance, which stores the distance in feet and inches Binary + to add two objects (D3=D1+D2)

#include<iostream>
using namespace std;

class Distance{
    private:
    int feet;
    int inches;
   
    public:
    Distance(){
        feet=0;
        inches=0;
    }
    Distance(int f,int i){
        feet=f;
        inches=i;
    }
    void display(){
        cout<<"Feet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
    Distance operator+(Distance d){
        Distance temp;
        temp.feet=feet+d.feet;
        temp.inches=inches+d.inches;
        return temp;
    }
};

int main(){
    Distance d1(10,15),d2(25,30),d3;
    d3=d1+d2;
    d3.display();
    return 0;
}
