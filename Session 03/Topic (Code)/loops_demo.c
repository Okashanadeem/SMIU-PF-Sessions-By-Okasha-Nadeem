/*
 * Example 1: Demonstrating for, while, and do-while loops
 * All three loops print numbers 1 to 5
 */

#include <stdio.h>

int main() {
    int i;
    
    // Using for loop
    printf("For loop: ");
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Using while loop
    printf("While loop: ");
    i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    
    // Using do-while loop
    printf("Do-while loop: ");
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");
    
    return 0;
}