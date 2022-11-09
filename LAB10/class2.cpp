#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream ifile;
    ifile.open("inputFile.dat");
    cout<<"Reading data: "<<endl;
    while(!ifile.eof()){
        char ch;
        ifile>>ch;
        cout<<ch;
    }
    ifile.close();
    return 0;
}