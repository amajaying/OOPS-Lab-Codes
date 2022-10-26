// Create a class Binary that contains one float data member. Overload the 4 arithmetic operators.

#include <iostream>
using namespace std;

class Binary
{
    float num;

public:
    Binary(float n = 0)
    {
        num = n;
    }
    void display()
    {
        cout << num << endl;
    }
    Binary operator+(Binary b2) // adding
    {
        Binary temp;
        temp.num = num + b2.num;
        return temp;
    }
    Binary operator-(Binary b2) // subtract
    {
        Binary temp;
        temp.num = num - b2.num;
        return temp;
    }
    Binary operator*(Binary b2) // multiply
    {
        Binary temp;
        temp.num = num * b2.num;
        return temp;
    }
    Binary operator/(Binary b2) // divide
    {
        Binary temp;
        temp.num = num / b2.num;
        return temp;
    }
};

int main()
{
    Binary b1(10), b2(2), b3;
    b3 = b1 + b2;
    cout<<"Operands: "<<endl;
    b1.display();
    b2.display();
    cout<<"Adding: "<<endl;
    b3.display();
    cout<<"Subtracting: "<<endl;
    b3 = b1 - b2;
    b3.display();
    cout<<"Multiplying: "<<endl;
    b3 = b1 * b2;
    b3.display();
    cout<<"Dividing: "<<endl;
    b3 = b1 / b2;
    b3.display();
    return 0;
}
