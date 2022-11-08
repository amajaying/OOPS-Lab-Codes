// WAP to add the dimension of two cube objects and print the results for volume of the resultant cube.

#include <iostream>
using namespace std;

class Cube{
    private:
    int length;
    int breadth;
    int height;
    public:
    Cube(int l=0, int b=0, int h=0){
        length=l;
        breadth=b;
        height=h;
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height: "<<height<<endl;
    }
    Cube operator+(Cube c2){
        Cube temp;
        temp.length=length+c2.length;
        temp.breadth=breadth+c2.breadth;
        temp.height=height+c2.height;
        return temp;
    }
    int volume(){
        return length*breadth*height;
    }
};

int main(){
    Cube c1(10,5,2), c2(2,4,6), c3;
    c3=c1+c2;
    cout<<"Cube 1: "<<endl;
    c1.display();
    cout<<"Volume: "<<c1.volume()<<endl;
    cout<<"\nCube 2: "<<endl;
    c2.display();
    cout<<"Volume: "<<c2.volume()<<endl;
    cout<<"\nResultant Cube: "<<endl;
    c3.display();
    cout<<"Volume: "<<c3.volume()<<endl;
    return 0;
}