// WAP to display data of two different types using function template with multiple arguments.

#include<iostream>
using namespace std;

template<typename T, typename U>
void display(T a, U b)
{
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}

int main()
{
    int a=10;
    float b=10.5;
    display(a,b);
    return 0;
}