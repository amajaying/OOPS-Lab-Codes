// 3)Write a function to multiply two values of type int &amp; double and returns the Result
#include<stdio.h>
double mul(int a, double b){
    return a*b;
}
int main(){
    int x;
    double y;
    scanf("%d%lf", &x, &y);
    printf("The result is: %lf\n", mul(x,y));
}