//swap numbers
// call by value

#include<iostream>
using namespace std;

void swap(int a, int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nAfter Swapping: "<<a<<" "<<b<<endl;	

}

int main(){
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"Before Swapping: "<<a<<" "<<b;	
	swap(a,b);
}
