// wap to display the reverse of a number using friend function

#include<iostream>
using namespace std;

class reverse
{
    int num;
    public:
        void getdata()
        {
            cout<<"Enter a number: ";
            cin>>num;
        }
        friend void display(reverse);
};

void display(reverse r)
{
    int rev=0, rem;
    while(r.num!=0){
        rem = r.num%10;
        rev = rev*10 + rem;
        r.num = r.num/10;
    }
    cout<<"Reverse of the number is: "<<rev<<endl;
}

int main()
{
    reverse r;
    r.getdata();
    display(r);
    return 0;
}
