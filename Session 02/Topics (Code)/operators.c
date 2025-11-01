#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    // Arithmetic operators
    printf("=== Arithmetic Operators ===\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);      // Integer division
    printf("%d %% %d = %d\n", a, b, a % b);     // Modulus
    
    // Relational operators
    printf("\n=== Relational Operators ===\n");
    printf("%d == %d: %d\n", a, b, a == b);
    printf("%d != %d: %d\n", a, b, a != b);
    printf("%d > %d: %d\n", a, b, a > b);
    printf("%d < %d: %d\n", a, b, a < b);
    
    // Logical operators
    printf("\n=== Logical Operators ===\n");
    int x = 1, y = 0;
    printf("%d && %d = %d\n", x, y, x && y);
    printf("%d || %d = %d\n", x, y, x || y);
    printf("!%d = %d\n", x, !x);
    
    return 0;
}