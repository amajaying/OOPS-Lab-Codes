// Open a file for writing

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream ofile;
    ofile.open("inputFile.dat");
    ofile<<"This is a line in a file" << endl;
    ofile <<"Ajay" <<endl;

    cout<<"Data written to file"<<endl;
    ofile.close();
    return 0;
}