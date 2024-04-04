/*  
    LAB ASSIGNMENT: 10
    Question number: 4

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 04/04/2024
*/

#include <stdio.h>

union Data {
    int intArray[20];
    float floatArray[20];
    char charArray[20];
};

int main() {
    union Data data;
    int choice;

    printf("Choose the type of array to store:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. Character\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter %d integer values:\n", 20);
            for (int i = 0; i < 20; ++i) {
                scanf("%d", &data.intArray[i]);
            }
            break;
        case 2:
            printf("Enter %d float values:\n", 20);
            for (int i = 0; i < 20; ++i) {
                scanf("%f", &data.floatArray[i]);
            }
            break;
        case 3:
            printf("Enter %d character values:\n", 20);
            for (int i = 0; i < 20; ++i) {
                scanf(" %c", &data.charArray[i]);
            }
            break;
            
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Printing the chosen array
    switch (choice) {
        case 1:
            printf("Integer array:\n");
            for (int i = 0; i < 20; ++i) {
                printf("%d ", data.intArray[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Float array:\n");
            for (int i = 0; i < 20; ++i) {
                printf("%.2f ", data.floatArray[i]);
            }
            printf("\n");
            break;
        case 3:
            printf("Character array:\n");
            for (int i = 0; i < 20; ++i) {
                printf("%c ", data.charArray[i]);
            }
            printf("\n");
            break;
    }

    return 0;
}
