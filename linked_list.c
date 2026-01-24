#include <stdio.h>
#include <string.h>

// Define a struct for employee data
typedef struct {
    char name[100];
    int age;
    char company[100];
    char role[100];
    double salary;  // Use double for better precision with large numbers
} Employee;

void salary_hike(Employee *person, double percentage) {
    if (percentage > 0) {
        person->salary += person->salary * (percentage / 100.0);
    }
}

int main() {
    Employee naveen;

    // Initialize employee data
    naveen.age = 24;
    naveen.salary = 1506090.00;
    strcpy(naveen.name, "Naveen");
    strcpy(naveen.company, "Technical Service Consultant");
    strcpy(naveen.role, "software developer");

    // Display initial details
    printf("Name: %s\n", naveen.name);
    printf("Age: %d\n", naveen.age);
    printf("Company: %s\n", naveen.company);
    printf("Role: %s\n", naveen.role);
    printf("Initial Salary: %.2f\n", naveen.salary);

    // Apply first salary hike
    salary_hike(&naveen, 10.0);
    printf("Salary after 10%% hike: %.2f\n", naveen.salary);

    // Apply second salary hike
    salary_hike(&naveen, 15.0);
    printf("Salary after additional 15%% hike: %.2f\n", naveen.salary);

    // Display struct sizes (optional, for debugging)
    printf("Size of struct: %zu bytes\n", sizeof(Employee));
    printf("Size of name field: %zu bytes\n", sizeof(naveen.name));

    return 0;
}