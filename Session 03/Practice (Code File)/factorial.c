/*
 * Example 4: Function to calculate factorial
 * Demonstrates function with parameters and return value
 */

#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }
    
    return 0;
}

// Function definition
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}