#include <iostream>
using namespace std;

class B;
class A
{
    private:
        float num1;
    public:
        A()
        {
            cout<<"Enter the value of num1: ";
            cin>>num1;

        }
        friend void average(A *num1, B *num2);
};
class B
{
    private:
        float num2;
    public:
        B()
        {
            cout<<"Enter the value of num2: ";
            cin>>num2;
        }
        friend void average(A *num1, B *num2);
};

void average(A *a, B *b)
{
        float no3;
        no3=(a->num1+b->num2)/2;
        cout<<"Average of the two numbers is: "<<no3<<endl;
}

int main()
{
        A b;
        B d;
        average(&b, &d);
        return 0;
}