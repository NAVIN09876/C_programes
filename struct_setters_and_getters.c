#include<stdio.h>
#include<string.h>

struct emp
{
    char name[50];
    char company_name[50];
    int id;
    float salary;
    char role[30];
    int exeprience;
};

void setter(struct emp* e)
{
    printf("Enter Name :");
    scanf("%s",e->name);
    printf("Enter Company Name :");
    scanf("%s",e->company_name);
    printf("Enter ID :");
    scanf("%d",&e->id);
    printf("Enter pacakage :");
    scanf("%f",&e->salary);
    printf("Enter role :");
    scanf("%s",e->role);
    printf("Exeprience :");
    scanf("%d",&e->exeprience);

}
void getter( struct emp e1)
{
    printf("==========Deatils of Employe===========\n");
    printf("Name : %s\n",e1.name);
    printf("Company name : %s\n",e1.name);
    printf("Employe ID : %d\n",e1.id);
    printf("Salary: %.f\n",e1.salary);
    printf("Role : %s\n",e1.role);
    printf("Experience : %d\n",e1.exeprience);
}
int main()
{
    struct emp e1;
    setter(&e1);
    getter(e1);

}