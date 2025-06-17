#include <stdio.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct Person p1;
    printf("Enter name:");
    scanf("%[^\n]s",p1.name);
    printf("Enter age :");
    scanf("%d",&p1.age);
    printf("Enter your cheight:");
    scanf("%1f",&p1.height);

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Height: %.1f\n", p1.height);

    return 0;
}
