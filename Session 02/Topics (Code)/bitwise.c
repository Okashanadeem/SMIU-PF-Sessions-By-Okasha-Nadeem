#include <stdio.h>

int main() {
    int a = 5;    // Binary: 0101
    int b = 3;    // Binary: 0011
    
    printf("a = %d (binary: 0101)\n", a);
    printf("b = %d (binary: 0011)\n\n", b);
    
    printf("a & b = %d  (AND: 0001)\n", a & b);
    printf("a | b = %d  (OR:  0111)\n", a | b);
    printf("a ^ b = %d  (XOR: 0110)\n", a ^ b);
    
    printf("\nLeft shift: %d << 1 = %d (multiply by 2)\n", a, a << 1);
    printf("Right shift: %d >> 1 = %d (divide by 2)\n", a, a >> 1);
    
    return 0;
}