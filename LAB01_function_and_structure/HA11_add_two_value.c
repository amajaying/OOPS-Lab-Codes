// 1)Write a function to add two values of type integer and returns the result
#include<stdio.h>

int add(int a, int b){
    return a+b;
}

int main(){
    int x, y;
    scanf("%d%d",&x,&y);
    printf("The sum is: %d\n", add(x,y));
}