// 4)WAP to find the factorial of a number n by using a suitable user defined function (say fact) for it.

#include<stdio.h>
int fact(int n){
    int fac=1;
    for(int i=1; i<=n; i++){
        fac=fac*i;
    }
    return fac;
}

int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a<0){
        printf("Sorry the factorial can't be determined.");
    }
    else{
        printf("\nThe factorial is: %d\n", fact(a));
    }
}