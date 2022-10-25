// Create a class shape. Derive three classes from it; Circle, Square and Triangle. Find area of each shape and display it, using virtual function.

#include<iostream>
#include<cmath>
using namespace std;

class Shape{
    public:
    // virtual void getData() = 0;
    virtual void area() = 0;
    virtual void display() = 0;
};

class Circle: public Shape{
    float ar, pi;
    int r;
    public:
    void getData(int r1, float pi1){
        r=r1;
        pi = pi1;
    }
    void area(){
        ar = pi * r * r;
    }
    void display(){
        cout<<"Area of Circle: "<< ar<<endl;
    }
};

class Square: public Shape{
    int ar;
    int l;
    public:
    void getData(int l1){
        l = l1;
    }
    void area(){
        ar = l*l;
    }
    void display(){
        cout<<"Area of Square: "<< ar<<endl;
    }
};
class Triangle: public Shape{
    int ar;
    int a,b,c;
    public:
    void getData(int a1, int b1, int c1){
        a=a1;
        b=b1;
        c=c1;
    }
    void area(){
        int s = (a+b+c)/2;
        ar = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    void display(){
        cout<<"Area of Triangle: "<<ar<<endl;
    }
};

int main(){
    int pi = 3.14;
    Shape *t;
    Triangle tr;
    t=&tr;
    tr.getData(5,6,7);
    t->area();
    t->display();

    Square sq;
    t=&sq;
    sq.getData(5);
    t->area();
    t->display();

    Circle c;
    t=&c;
    c.getData(5, 3.14);
    t->area();
    t->display();



    return 0;
}