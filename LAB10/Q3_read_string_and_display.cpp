// WAP to read the string from keyboard and write to a file.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[100];
    ofstream ofile;
    ofile.open("newfile.txt");
    cout<<"Enter the string: ";
    cin.getline(data,100);
    ofile<<data<<endl;
    cout<<"Data written to file"<<endl;
    ofile.close();
    return 0;
}
