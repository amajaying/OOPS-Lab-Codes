#include <stdio.h>

struct students
{
    char name[20];
    int roll;
    int mark[5];
} s;

int main()
{
    printf("Enter your name and roll number: ");
    scanf("%s %d", s.name, &s.roll);
    printf("Enter the marks: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &s.mark[i]);
    }

    printf("\nName: %s\nRoll Number: %d\n", s.name, s.roll);
    printf("The marks are: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", s.mark[i]);
    }
}