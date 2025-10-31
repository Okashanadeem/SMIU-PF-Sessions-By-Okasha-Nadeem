#include <stdio.h>

int main() {
    int num1, num2, larger;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        larger = num1;
    } else {
        larger = num2;
    }
    
    printf("Larger number is: %d\n", larger);
    
    return 0;

}