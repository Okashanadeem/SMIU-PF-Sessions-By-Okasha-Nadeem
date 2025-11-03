/*
 * Example 3: Demonstrating scope - local vs global variables
 */

#include <stdio.h>

int global_var = 100;  // Global variable

void function1() {
    int local_var = 10;  // Local to function1
    printf("Function1 - Local: %d, Global: %d\n", local_var, global_var);
    global_var = 200;  // Can modify global
}

void function2() {
    int local_var = 20;  // Different local variable
    printf("Function2 - Local: %d, Global: %d\n", local_var, global_var);
}

int main() {
    printf("Main - Global: %d\n", global_var);
    function1();
    function2();
    printf("Main - Global after changes: %d\n", global_var);
    
    return 0;
}