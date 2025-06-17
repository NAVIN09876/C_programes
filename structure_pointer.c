/*| Access Type       | Syntax              | Example            |
| ----------------- | ------------------- | ------------------ |
| Direct member     | `.`                 | `p1.age`           |
| Pointer to struct | `->`                | `ptr->age`         |
| Array via pointer | `*(ptr + i).member` | `(ptr + i)->title` |
*/

#include<stdio.h>

struct employee_details{
    char employer_id[10];
    char employer_name[100];
    char company_name[20];
    int  Experieanc;
    char employer_role[100];
    char employer_domain[100];
};
int main()
{
    struct employee_details emp1;
    struct employee_details *ptr = &emp1;


    printf("Enter employer Id:");
    scanf(" %[^\n]",ptr->employer_id);
    printf("Enter employer Name:");
    scanf(" %[^\n]",ptr->employer_name); 
    printf("Enter company Name:");
    scanf(" %[^\n]",ptr->company_name); 
    printf("Enter Experiecnce :");
    scanf("%d",&ptr->Experieanc); 
    printf("Enter Role:");
    scanf(" %[^\n]",ptr->employer_role); 
    printf("Enter Domain:");
    scanf(" %[^\n]",ptr->employer_domain); 




    printf("======Employer Details======\n");
   
    printf("Employer ID : %s\n",ptr->employer_id);
    printf("Employer Name : %s\n",ptr->employer_name);
    printf("Employer Company Name : %s\n",ptr->company_name);
    printf("Employer Experience : %d\n",ptr->Experieanc);
    printf("Employer Role :%s\n",ptr->employer_role);

    printf("Employer Domain:%s\n",ptr->employer_domain);

}

