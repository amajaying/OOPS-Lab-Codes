// WAP to copy the contents of a file to other.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[100];
    ifstream ifile;
    ifile.open("file.txt");
    ofstream ofile;
    ofile.open("nfile.txt");
    cout<<"Reading data from a file: "<<endl;
    while(!ifile.eof()){
        ifile.getline(data,100);
        cout<<data<<endl;
        ofile<<data<<endl;
    }
    ifile.close();
    ofile.close();
    return 0;
}