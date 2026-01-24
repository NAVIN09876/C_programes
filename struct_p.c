#include<stdio.h>
#include<stdio.h>
struct emoloyee
{
    int id;
    float salary;
    char name[100];
} e1;



void hike_salary()
{

}


int main()
{
	printf("enter employe ID :");
	scanf("%d",&e1.id);

	printf("enter employe salary :");
	scanf("%f",&e1.salary);

	printf("Etter name:");

	scanf("%s",&e1.name);



	printf("Name = %s\n Company = %s \n ID = %d \ Salary = %.3f",e1.name,e1.company,e1.name,e1.id,e1.salary);

}
