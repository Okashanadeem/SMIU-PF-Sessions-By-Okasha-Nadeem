#include <stdio.h>

int main() {
    // Declare and initialize
    int age = 21;
    char grade = 'A';
    float height = 5.9;
    
    // Output
    printf("Age: %d years\n", age);        // %d for int
    printf("Grade: %c\n", grade);          // %c for char
    printf("Height: %.1f feet\n", height); // %f for float
    
    // Input from user
    int number;
    printf("\nEnter a number: ");
    scanf("%d", &number);  // & gives address of variable
    printf("You entered: %d\n", number);
    
    // String input (no & for arrays)
    char name[50];
    printf("Enter name: ");
    scanf("%s", name);     // No & for arrays
    printf("Hello, %s!\n", name);
    
    return 0;
}