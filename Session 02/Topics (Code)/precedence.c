#include <stdio.h>

int main() {
    int result;
    
    // Without parentheses
    result = 2 + 3 * 4;
    printf("2 + 3 * 4 = %d\n", result);  // 14 (not 20)
    
    // With parentheses
    result = (2 + 3) * 4;
    printf("(2 + 3) * 4 = %d\n", result); // 20
    
    // Mixed operators
    result = 10 > 5 && 3 < 7;
    printf("10 > 5 && 3 < 7 = %d\n", result); // 1 (true)
    
    // Complex expression
    int a = 5, b = 10, c = 15;
    result = a + b > c || b * 2 == 20;
    printf("5 + 10 > 15 || 10 * 2 == 20 = %d\n", result); // 1
    
    return 0;
}