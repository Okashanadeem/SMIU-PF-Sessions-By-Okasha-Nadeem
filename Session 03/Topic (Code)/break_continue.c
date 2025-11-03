/*
 * Example 2: Demonstrating break and continue statements
 */

#include <stdio.h>

int main() {
    // Break example
    printf("Break example (exit at 5):\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;  // Exit loop
        }
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Continue example
    printf("Continue example (skip 3 and 6):\n");
    for (int i = 1; i <= 8; i++) {
        if (i == 3 || i == 6) {
            continue;  // Skip this iteration
        }
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}