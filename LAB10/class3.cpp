#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[100];
    ifstream ifile;
    ifile.open("inputFile.dat");
    cout<<"Reading data from a file: "<<endl;
    while(!ifile.eof()){
        ifile.getline(data,100);
        cout<<data<<endl;
    }
    ifile.close();
    return 0;
}