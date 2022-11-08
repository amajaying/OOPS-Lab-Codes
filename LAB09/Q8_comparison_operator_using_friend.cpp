// Overload comparison operator (==) using friend function

#include<iostream>
using namespace std;

class Ti{
    private:
    int hour;
    int minute;
    int second;
    public:
    Ti(int h=0, int m=0, int s=0){
        hour=h;
        minute=m;
        second=s;
    }
    void display(){
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
    friend bool operator==(Ti t1, Ti t2);
};

bool operator==(Ti t1, Ti t2){
    if(t1.hour==t2.hour && t1.minute==t2.minute && t1.second==t2.second)
        return true;
    else
        return false;
}

int main(){
    Ti t1(10, 20, 30), t2(10, 20, 30);
    if(t1==t2)
        cout<<"t1 and t2 are equal"<<endl;
    else
        cout<<"t1 and t2 are not equal"<<endl;
    return 0;
}