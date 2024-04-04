/*  
    LAB ASSIGNMENT: 10
    Question number: 5

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 04/04/2024
*/


#include <stdio.h>
#include <string.h>

enum payType
{
    HOURLY=1,SALARY=2
};

union EmpDetails
{
    float hourlyWage;
    double fixedSalary;
};

struct Employee
{
    int id;
    char name[50];
    enum payType paytype;
    union EmpDetails details;
};

int main()
{
    struct Employee emp;

    printf("Enter employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter employee name: ");
    scanf("%s", emp.name);
    int choice;

    do
    {
        printf("Enter PayType (1 for hourly wage, 2 for fixed salary): ");
        scanf("%d", &choice);

        switch (choice)
        {

        case HOURLY:
            emp.paytype=HOURLY;
            printf("Enter hourly wage: ");
            scanf("%f", &emp.details.hourlyWage);
            break;

        case SALARY:
            emp.paytype=SALARY;
            printf("Enter fixed salary: ");
            scanf("%lf", &emp.details.fixedSalary);
            break;

        default:
            printf("\aInvalid input!\n");
        }

    } while (!(choice == HOURLY || choice == SALARY));

    printf("\n-----------------------------------\nInput received:\n");
    // Display employee details
    printf("\nEmployee ID: %d\n", emp.id);
    printf("Employee Name: %s\n", emp.name);

    if (choice == HOURLY)
        printf("Employee Hourly Wage: %.2f\n", emp.details.hourlyWage);
    else if (choice == SALARY)
        printf("Employee Fixed Salary: %.2lf\n", emp.details.fixedSalary);

    printf("-----------------------------------\n");
    return 0;
}
