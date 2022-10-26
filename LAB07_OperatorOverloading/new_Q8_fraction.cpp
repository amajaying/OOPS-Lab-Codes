// Create a class fraction to represent a fraction of the type 2/5. Overload the 4 arithmetic operators and == to compare two fraction objects.

#include <iostream>
using namespace std;

class Fraction
{
    int num, den;

public:
    Fraction(int n = 0, int d = 1)
    {
        num = n;
        den = d;
    }
    void display()
    {
        cout << num << "/" << den << endl;
    }
    Fraction operator+(Fraction f2) // adding
    {
        Fraction temp;
        temp.num = num * f2.den + den * f2.num;
        temp.den = den * f2.den;
        return temp;
    }
    Fraction operator-(Fraction f2) // subtract
    {
        Fraction temp;
        temp.num = num * f2.den - den * f2.num;
        temp.den = den * f2.den;
        return temp;
    }
    Fraction operator*(Fraction f2) // multiply
    {
        Fraction temp;
        temp.num = num * f2.num;
        temp.den = den * f2.den;
        return temp;
    }
    Fraction operator/(Fraction f2) // divide
    {
        Fraction temp;
        temp.num = num * f2.den;
        temp.den = den * f2.num;
        return temp;
    }
    bool operator==(Fraction f2)
    {
        if (num * f2.den == den * f2.num)
            return true;
        else
            return false;
    }
};

int main()
{
    Fraction f1(2, 5), f2(2, 5), f3;
    f3 = f1 + f2;
    cout << "Operands: " << endl;
    f1.display();
    f2.display();
    cout << "Adding: " << endl;
    f3.display();
    cout << "Subtracting: " << endl;
    f3 = f1 - f2;
    f3.display();
    cout << "Multiplying: " << endl;
    f3 = f1 * f2;
    f3.display();
    cout << "Dividing: " << endl;
    f3 = f1 / f2;
    f3.display();
    cout << "Comparing: " << endl;
    if (f1 == f2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;
    return 0;
}
