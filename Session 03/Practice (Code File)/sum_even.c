/*
 * Example 5: Function to calculate sum of even numbers up to N
 * Combines loops and functions
 */

#include <stdio.h>

// Function to calculate sum of even numbers from 1 to n
int sumEven(int n) {
    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int limit, result;
    
    printf("Enter limit: ");
    scanf("%d", &limit);
    
    result = sumEven(limit);
    printf("Sum of even numbers from 1 to %d = %d\n", limit, result);
    
    return 0;
}