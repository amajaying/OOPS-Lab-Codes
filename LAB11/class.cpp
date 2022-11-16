// Function Template

#include<iostream>
using namespace std;

template <class T>
T maxm(T a, T b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a=10, b=20;
    float c=10.5, d=20.5;
    cout<<"Max of "<<a<<" and "<<b<<" is "<<maxm(a,b)<<endl;
    cout<<"Max of "<<c<<" and "<<d<<" is "<<maxm(c,d)<<endl;
    return 0;
}