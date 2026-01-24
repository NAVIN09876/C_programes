#include <stdio.h>
#pragma pack(1)

struct student
{
    char name[50]; 
    int roll_number;
    int class_std;
    int parent_mobile_number;
    char section;
};

struct school
{
    char school_name[50];
    char medium[50];
    char address[50];
    struct student s;
};

void setter(struct school *sc)
{
    printf("Enter School Name: ");
    scanf("%s", sc->school_name);

    printf("Enter Medium: ");
    scanf("%s", &sc->medium);

    printf("Enter Address: ");
    scanf("%s", sc->address);

    printf("Enter Student Name: ");
    scanf("%s", sc->s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &sc->s.roll_number);

    printf("Enter Class: ");
    scanf("%d", &sc->s.class_std);

    printf("Enter Parent Mobile Number: ");
    scanf("%d", &sc->s.parent_mobile_number);

    printf("Enter Section: ");
    scanf(" %c", &sc->s.section);
}

void getter(struct school sc)
{
    printf("\n--- School Details ---\n");
    printf("School Name: %s\n", sc.school_name);
    printf("Medium: %s\n", sc.medium);
    printf("Address: %s\n", sc.address);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", sc.s.name);
    printf("Roll Number: %d\n", sc.s.roll_number);
    printf("Class: %d\n", sc.s.class_std);
    printf("Parent Mobile: %d\n", sc.s.parent_mobile_number);
    printf("Section: %c\n", sc.s.section);

}

int main()
{
    struct school s1;

    setter(&s1);
    getter(s1);



    







    return 0;
}
