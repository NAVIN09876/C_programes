#include<stdio.h>
#include<string.h>

struct employee
{
    int id;
    float salary;
    char name[100];
} e1;

int main()
{
    printf("Enter employee ID: ");
    scanf("%d", &e1.id);

    printf("Enter employee salary: ");
    scanf("%f", &e1.salary);

    printf("Enter name: ");
    scanf("%s", e1.name);

    printf("Name = %s\nID = %d\nSalary = %.3f\n",
           e1.name, e1.id, e1.salary);

    return 0;
}
