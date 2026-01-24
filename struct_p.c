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

    getchar(); // consume leftover newline

    printf("Enter name: ");
    fgets(e1.name, sizeof(e1.name), stdin);

    printf("Name = %sID = %d\nSalary = %.3f\n",
           e1.name, e1.id, e1.salary);

    return 0;
}
