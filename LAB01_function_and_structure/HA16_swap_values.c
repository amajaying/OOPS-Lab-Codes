// WAP to swap the values of two variables by using a suitable user defined function

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    swap(&a, &b);
    printf("\nThe swapped numbers are %d %d\n", a, b);
    return 0;
}