// 9)Write a program to read the name, address,and salary of 5 employees using array of structure.Display information of each employee in alphabetical order of their name.
#include<stdio.h>

struct emp
{
    char name[20];
    char addr[20];
    int salary;
};

int main(){
    struct emp e[5];
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%s",e[i].name);
    }
    
    for(int i=0; i<5; i++){
        a[i]=e[i].name[0];
        printf("%d ", a[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        
    }
    
}
