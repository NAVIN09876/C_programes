#include<stdio.h>
/*struct struct_name{
    structure members
    int number; here we declaration only  
    cahr arr[];
}s1; two type  of variable creation s1 is variable and structure end with ;
int main()
{
struct struct_name s2 ={1,"name"} structure variable defination
 . is use for accessing struct member and assinging value
}
*/


struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1 = {"Naveen", 25, 5.9};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);

    return 0;
}
