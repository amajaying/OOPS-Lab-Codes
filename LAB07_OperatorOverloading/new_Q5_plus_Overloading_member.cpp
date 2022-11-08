// WAP to overload arithmetic plus(+) operator for adding two complex numbers using member function.

#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex operator+(Complex c2)
    {
        Complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
};

int main()
{
    Complex c1(10, 5), c2(2, 4), c3;
    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
