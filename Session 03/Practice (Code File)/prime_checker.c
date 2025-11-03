/*
 * Mini Project: Prime Number Checker
 * Uses function and loop to determine if number is prime
 */

#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;  // Not prime
    }
    
    // Check divisibility from 2 to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;  // Not prime (divisible)
        }
    }
    
    return 1;  // Prime
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a PRIME number\n", num);
    } else {
        printf("%d is NOT a prime number\n", num);
    }
    
    return 0;
}