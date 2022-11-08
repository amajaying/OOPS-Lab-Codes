// Overload the insertion (<<) and extraction (>>) operators for accepting and displaying the time in hour, minute and second format.

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
    friend ostream& operator<<(ostream &out, Ti t1);
    friend istream& operator>>(istream &in, Ti &t1);
};

ostream& operator<<(ostream &out, Ti t1){
    out<<t1.hour<<":"<<t1.minute<<":"<<t1.second<<endl;
    return out;
}

istream& operator>>(istream &in, Ti &t1){
    in>>t1.hour>>t1.minute>>t1.second;
    return in;
}

int main(){
    Ti t1;
    cout<<"Enter time in hour, minute and second format: ";
    cin>>t1;
    cout<<"Time: ";
    cout<<t1;
    return 0;
}