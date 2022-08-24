#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
public:
    float a = 3;
    float b = 4;
    float c = 5;
};

int main()
{
    Triangle t;

    float s = (t.a + t.b + t.c) / 2;
    float area = s * (s - t.a) * (s - t.b) * (s - t.c);
    cout << "The area of triangle is: " << sqrt(area) << endl;
    cout << "The perimeter of triangle is: " << t.a + t.b + t.c << endl;
}