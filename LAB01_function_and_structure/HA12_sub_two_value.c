// 2)Write a function to subtract two values of type float and returns the result
#include<stdio.h>
float sub(float a, float b){
    return a-b;
}
int main(){
    float x,y;
    scanf("%f%f", &x, &y);
    printf("The result is: %f\n", sub(x,y));
}