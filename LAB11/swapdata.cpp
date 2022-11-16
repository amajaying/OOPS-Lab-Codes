// Program to swap data using function templates

#include<iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=10, b=20;
    char c='A', d='B';
    cout<<"Before swapping: a="<<a<<" b="<<b<<endl;
    Swap<int>(a,b);
    cout<<"After swapping: a="<<a<<" b="<<b<<endl;
    cout<<"Before swapping: c="<<c<<" d="<<d<<endl;
    Swap<char>(c,d);
    cout<<"After swapping: c="<<c<<" d="<<d<<endl;
    return 0;
}