// WAP to display data of two different types using class template with multiple arguments.

#include<iostream>
using namespace std;

template<typename T, typename U>
class Display
{
    T a;
    U b;
    public:
    Display(T a, U b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    int a=10;
    float b=10.5;
    Display<int,float> d(a,b);
    d.display();
    return 0;
}