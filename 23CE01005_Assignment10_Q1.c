/*  
    LAB ASSIGNMENT: Assignment 10
    Question number: Question 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 04/04/2024
*/


#include <stdio.h>

union Data {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    union Data data;
    int choice;

    printf("Enter the type of data you want to enter:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter an integer: ");
            scanf("%d", &data.intValue);
            printf("Integer value: %d\n", data.intValue);
            break;
        case 2:
            printf("Enter a float: ");
            scanf("%f", &data.floatValue);
            printf("Float value: %f\n", data.floatValue);
            break;
        case 3:
            printf("Enter a character: ");
            scanf(" %c", &data.charValue); 
            printf("Character value: %c\n", data.charValue);
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    return 0;
}
