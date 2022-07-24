// Define a structure of employee having data members name, address, age and salary. Take the data for n employees in an array and find the average salary.
#include <stdio.h>
struct emp{
    char name[20];
    char addr[20];
    int age;
    int salary;
};

int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct emp e[n];
    for (int i = 0; i < n; i++){
        printf("\nEnter the name: ");
        scanf("%s", e[i].name);
        printf("\nEnter address: ");
        scanf("%s", e[i].addr);
        printf("\nEnter age: ");
        scanf("%d", &e[i].age);
        printf("Enter salary: ");
        scanf("%d", &e[i].salary);
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + e[i].salary;
    }
    int avg = sum / n;
    printf("The average salary is: %d", avg);
}