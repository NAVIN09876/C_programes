#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int roll;
    float marks;
};

void struct_fun(struct student s1)
{
    printf("Call by value\n");
    printf("Name = %s\nRoll number = %d\nMarks = %.2f\n", s1.name, s1.roll, s1.marks);
}

void call_by_reference(struct student *s1)
{
    printf("Call by reference\n");
    printf("Name = %s\nRoll number = %d\nMarks = %.2f\n", s1->name, s1->roll, s1->marks);
}

struct student set_fun(struct student n1)
{
    strcpy(n1.name, "Navin"); // ✅ copy string into array
    n1.roll = 9;
    n1.marks = 80.99;
    return n1;
}

void array_of_structures()
{
    struct student n[5];
    struct student **ptr = n; // points to first element


    // Input
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter Name: ");
        scanf("%19s",ptr[i]->name);

        printf("Enter Roll Number: ");
        scanf("%d", &n[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &n[i].marks);
    }

    // Output
    printf("\nStudent details:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nName = %s", n[i].name);
        printf("\nRoll number = %d", n[i].roll);
        printf("\nMarks = %.2f\n", n[i].marks);
    }
}

int main()
{
    struct student s = {"Naveen", 3, 98.99};

    struct_fun(s);
    call_by_reference(&s);

    s = set_fun(s);
    printf("\nAfter set_fun:\nName = %s\nRoll number = %d\nMarks = %.2f\n", s.name, s.roll, s.marks);

    array_of_structures();

    return 0;
}
