// WAP to read the contents of a file and count the number of characters, blanks, tabs and lines in the screen and display it in the screen.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[100];
    ifstream ifile;
    int chara=0, blank=0, tab=0, line=0;
    ifile.open("file.txt");
    cout<<"Reading data from a file: "<<endl;
    while(!ifile.eof()){
        if(!ifile.getline(data,100)){
            break;
        }
        cout<<data<<endl;
        for(int i=0;data[i]!='\0';i++){
            if(data[i]==' '){  //hello gn
                blank++;
            }
            else if(data[i]=='\t'){
                tab++;
            }
            else if(data[i]=='\n'){
                line++;
            }
            else{
                chara++;
            }
        }
    }
    cout<<"Number of characters: "<<chara<<endl;
    cout<<"Number of blanks: "<<blank<<endl;
    cout<<"Number of tabs: "<<tab<<endl;
    cout<<"Number of lines: "<<line<<endl;
    ifile.close();
    return 0;
}