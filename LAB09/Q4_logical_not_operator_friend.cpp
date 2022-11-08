// Overload the logical not operator using friend function

#include<iostream>
using namespace std;

class Numberr{
    private:
    int number;
    public:
    Numberr(int n=0){
        number=n;
    }
    void display(){
        cout<<number<<endl;
    }
    friend bool operator!(Numberr c1);
};

bool operator!(Numberr c1){
    if(c1.number==0)
        return true;
    else
        return false;
}

int main(){
    Numberr c1(10), c2(0);
    if(!c1)
        cout<<"c1 is zero"<<endl;
    else
        cout<<"c1 is not zero"<<endl;
    if(!c2)
        cout<<"c2 is zero"<<endl;
    else
        cout<<"c2 is not zero"<<endl;
    return 0;
}
