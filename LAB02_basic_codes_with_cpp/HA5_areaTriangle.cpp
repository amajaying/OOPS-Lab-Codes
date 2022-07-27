// WAP to calculate the area of the triangle using Heron’s formula.

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	float a,b,c;
	cout<<"Enter sides of triangle: ";
	cin>>a>>b>>c;
	
	float s=(a+b+c)/2;
	float area = sqrt(s*(s-a)*(s-b)*(s-c));
	
	cout<<"The area of triangle is: "<<area<<endl;
	
	
}
