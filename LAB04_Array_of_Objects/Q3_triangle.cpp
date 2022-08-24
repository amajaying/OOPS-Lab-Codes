#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
    private:
    float a=3;
    float b=4;
    float c=5;
    public:
    void print_area(){
        float s = (a+b+c)/2;
        float area = s*(s-a)*(s-b)*(s-c);
        cout<<"The area of triangle is: "<<sqrt(area)<<endl;
    }

    void print_peri(){
        cout<<"The perimeter of triangle is: "<<a+b+c<<endl;
    }
};

int main(){
    Triangle t;
    t.print_area();
    t.print_peri();
}