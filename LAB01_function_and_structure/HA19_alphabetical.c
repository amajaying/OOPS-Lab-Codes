// 9)Write a program to read the name, address,and salary of 5 employees using array of structure.Display information of each employee in alphabetical order of their name.

#include<stdio.h>
#include<string.h>
struct emp
{
    char name[20];
    char addr[20];
    int salary;
}e[5];


typedef struct emp a;
int sort(){
    a temp;
    for(int i=0; i<4; i++){
        for(int j=i+1; j<5; j++){
            if(strcmp(e[i].name,e[j].name)>0){
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
        
int main(){

    for (int i = 0; i < 5; i++)
    {
        printf("Enter name: ");
        scanf("%s", e[i].name);
        printf("Enter address: ");
        scanf(" %s", e[i].addr);
        printf("Enter salary: ");
        scanf(" %d", &e[i].salary);
    }
    sort();
    for(int i=0; i<5; i++){
        printf("Name: %s\nAddress: %s\nSalary: %d\n\n", e[i].name, e[i].addr, e[i].salary);
    }
    return 0;
}
