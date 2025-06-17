// array of sttructure
#include <stdio.h>
#include <string.h>

struct student_data {
    int student_class;   // renamed from 'class'
    char name[100];
    int rollnumber;
    float percentage;
};

int main() {
    printf("Enter data for 2 students:\n");
    struct student_data s[2];

    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter class: ");
        scanf("%d", &s[i].student_class);
        getchar();  // consume newline left by previous scanf

        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        // remove newline character if present
        size_t len = strlen(s[i].name);
        if (len > 0 && s[i].name[len - 1] == '\n') {
            s[i].name[len - 1] = '\0';
        }

        printf("Enter roll number: ");
        scanf("%d", &s[i].rollnumber);

        printf("Enter percentage: ");
        scanf("%f", &s[i].percentage);
    }

    printf("\n--- Student Data ---\n");
    for (int i = 0; i < 2; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Class      : %d\n", s[i].student_class);
        printf("Name       : %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].rollnumber);
        printf("Percentage : %.2f%%\n", s[i].percentage);
    }

    return 0;
}
