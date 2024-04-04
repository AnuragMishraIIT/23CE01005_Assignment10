/*  
    LAB ASSIGNMENT: 10
    Question number: 2

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 04/04/2024
*/

#include <stdio.h>

// Define a structure
struct MyStruct {
    int x;
    int y;
    char z;
};

// Define a union
union MyUnion {
    int x;
    int y;
    char z;
};

int main() {
    struct MyStruct myStruct;
    union MyUnion myUnion;

    printf("Size of struct: %lu bytes\n", sizeof(myStruct));
    printf("Size of union: %lu bytes\n", sizeof(myUnion));

/*
Explanation:
Structures allocate memory for each member independently.
Therefore, the total size of a structure is the sum of the sizes of all its members plus any necessary padding for alignment.
Unions, on the other hand, allocate memory that is large enough to hold the largest member.
*/
    return 0;
}
