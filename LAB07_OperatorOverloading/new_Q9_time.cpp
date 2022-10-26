// Create a class Time which contains three data members: hour, minute and second. WAP to overload == to check whether two time are same or not.

#include <iostream>
using namespace std;

class Time
{
    int hour, minute, second;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void display()
    {
        cout << hour << " hrs : " << minute << " mins : " << second <<" secs"<< endl;
    }
    bool operator==(Time t2)
    {
        if (hour == t2.hour && minute == t2.minute && second == t2.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Time t1(10, 20, 30), t2(10, 20, 30), t3(6, 20, 40);
    cout << "Times: " << endl;
    t1.display();
    t2.display();
    t3.display();
    cout << "Results: " << endl;
    if (t1 == t2)
    {
        cout << "t1 and t2 are same" << endl;
    }
    else
    {
        cout << "t1 and t2 are not same" << endl;
    }
    if (t1 == t3)
    {
        cout << "t1 and t3 are same" << endl;
    }
    else
    {
        cout << "t1 and t3 are not same" << endl;
    }
    return 0;
}