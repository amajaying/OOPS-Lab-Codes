// wap to display the cube of a number up to a given integer using friend function
#include<iostream>
using namespace std;

class cube
{
    int num;
    public:
        void getdata()
        {
            cout<<"Enter a number: ";
            cin>>num;
        }
        friend void display(cube);
};

void display(cube c)
{
    for(int i=1;i<=c.num; i++){
        cout<<"Cube of "<<i<<" is "<<i*i*i<<endl;
    }
}

int main()
{
    cube c;
    c.getdata();
    display(c);
    return 0;
}

