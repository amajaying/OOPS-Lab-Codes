// WAP to find factorial of number

#include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"Enter a no. to find factorial: ";
	cin>>a;
	int result=1;
	for(int i=1; i<=a; i++){
		result=result*i;
	}
	cout<<"The factorial of "<<a<<" is "<<result<<endl;
}
