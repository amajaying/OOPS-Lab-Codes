#include<iostream>
#include<math.h>
using namespace std;

class Distance{
    int x1,y1,x2,y2;
    public:
        void getdata(){
            cout<<"Enter x1: ";
            cin>>x1;
            cout<<"Enter y1: ";
            cin>>y1;
            cout<<"Enter x2: ";
            cin>>x2;
            cout<<"Enter y2: ";
            cin>>y2;
        }
        void display(){
            cout<<"Distance between ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is: "<<(sqrt(pow(x2-x1,2)+pow(y2-y1,2)))<<endl;
        }
};

int main(){

    Distance dis;
    dis.getdata();
    dis.display();
    return 0;
}