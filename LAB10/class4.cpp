#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char line[100];
    fstream file;
    file.open("file.txt",ios::out|ios::app);
    if(file.fail()){
        cout<<"Error in opening file"<<endl;
    }
    else{
        cout<<"Enter a line:";
        cin.getline(line,100);
        file<<line<<endl;
        cout<<"Line written into the file."<<endl;
        file.close();
    }
    return 0;
}