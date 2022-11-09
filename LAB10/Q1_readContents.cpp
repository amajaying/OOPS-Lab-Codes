// WAP to read the contents of a file and display in the screen.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[100];
    ifstream ifile;
    ifile.open("file.txt");
    cout<<"Reading data from a file: "<<endl;
    while(!ifile.eof()){
        ifile.getline(data,100);
        cout<<data<<endl;
    }
    ifile.close();
    return 0;
}
