#include <stdio.h>

#define TAX_RATE 0.15

int main() {
    const double PI = 3.14159;
    
    // Calculate circle area
    double radius = 5.0;
    double area = PI * radius * radius;
    printf("Circle area: %.2f\n", area);
    
    // Calculate tax
    double price = 1000.0;
    double total = price + (price * TAX_RATE);
    printf("Total with tax: %.2f\n", total);
    
    return 0;
}