/*
 * Example 6: Multiplication table generator
 * Demonstrates modular programming with functions and loops
 */

#include <stdio.h>

// Function to print multiplication table
void printTable(int num, int range) {
    printf("\nMultiplication Table of %d:\n", num);
    printf("-------------------------\n");
    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Function to get valid input
int getPositiveNumber(const char *prompt) {
    int num;
    do {
        printf("%s", prompt);
        scanf("%d", &num);
        if (num <= 0) {
            printf("Please enter a positive number!\n");
        }
    } while (num <= 0);
    return num;
}

int main() {
    int number, range;
    char choice;
    
    do {
        number = getPositiveNumber("Enter number for table: ");
        range = getPositiveNumber("Enter range (how many multiples): ");
        
        printTable(number, range);
        
        printf("\nGenerate another table? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you!\n");
    return 0;
}