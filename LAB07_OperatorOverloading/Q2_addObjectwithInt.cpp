// WAP to overload following operators for class distance, which stores the distance in feet and inches.Binary + to Add an object to an integer, where the integer should be added to the inches value ( D2=4+D1)

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
    Distance operator+(int i){
        Distance temp;
        temp.feet=feet;
        temp.inches=inches+i;
        return temp;
    }
};

int main(){
    Distance d1(10,6),d2;
    d2=d1+77;
    d2.display();
    return 0;
}