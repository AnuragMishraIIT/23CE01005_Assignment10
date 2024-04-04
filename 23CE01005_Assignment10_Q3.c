/*
    LAB ASSIGNMENT: 10
    Question number: 3

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 04/04/2024
*/

#include <stdio.h>
#include <string.h>

// Define a union for employee details
union EmpDetails
{
    float hourlyWage;
    double fixedSalary;
};

// Define the Employee structure
struct Employee
{
    int id;
    char name[50];
    union EmpDetails details;
};

int main()
{
    struct Employee emp;

    // Input employee details
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);
    int choice;
    do
    {
        printf("Enter type of compensation (1 for hourly wage, 2 for fixed salary): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter hourly wage: ");
            scanf("%f", &emp.details.hourlyWage);
            break;
        case 2:
            printf("Enter fixed salary: ");
            scanf("%lf", &emp.details.fixedSalary);
            break;
        default:
            printf("\aInvalid input!\n");
        }
    } while (!(choice == 1 || choice == 2));

    printf("\n-----------------------------------\nInput received:\n");
    // Display employee details
    printf("\nEmployee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);

    if (choice == 1)
        printf("Employee Hourly Wage: %.2f\n", emp.details.hourlyWage);
    else if (choice == 2)
        printf("Employee Fixed Salary: %.2lf\n", emp.details.fixedSalary);

    printf("-----------------------------------\n");
    return 0;
}
