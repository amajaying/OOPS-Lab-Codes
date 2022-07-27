// Program to find average marks obtained by a class of 10 students in a test.

#include<iostream>
using namespace std;

int main(){
	cout<<"Enter the marks of 10 students: ";
	int sum=0;
	int a[10];
	for(int i=0; i<10; i++){
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<"\nThe average of marks is: "<<sum/10<<endl;
}
