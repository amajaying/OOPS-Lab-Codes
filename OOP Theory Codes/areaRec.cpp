#include <iostream>
using namespace std;

class Area
{
public:
    int l;
    int b;
    int calcArea(int l, int b)
    {
        int a = l * b;
        cout << "Area: " << a;
    }
};

int main()
{
    Area rec1;

    cout << "Enter the length: ";
    cin >> rec1.l;
    cout << "Enter the breadth: ";
    cin >> rec1.b;

    rec1.calcArea(rec1.l,rec1.b);
}