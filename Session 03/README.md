# Day 3 — Loops, Functions, and Program Structure in C
## C Programming Fundamentals

**Duration:** 90 minutes (1 hour 30 minutes)

**Prerequisites:** Day 1–2 concepts (variables, data types, operators, decision-making)

---

## Learning Objectives

By the end of this session, students will be able to:

1. Use different types of loops (for, while, do-while) effectively
2. Apply loop control statements (break, continue)
3. Define and call functions with parameters and return values
4. Understand the difference between local and global variables
5. Write modular programs using functions
6. Use header files and understand program structure
7. Apply proper commenting and code organization practices

---

## Concept Explanations

### 1. Header Files & Program Structure

**Definition:** Header files contain declarations of functions and macros that can be shared between source files.

**Common Header Files:**
- `#include <stdio.h>` - Standard Input/Output (printf, scanf)
- `#include <stdlib.h>` - Standard Library (malloc, rand, exit)
- `#include <math.h>` - Math functions (pow, sqrt, sin)
- `#include <string.h>` - String functions (strcpy, strlen)

**Basic C Program Structure:**
```c
// Preprocessor directives
#include <stdio.h>

// Main function
int main() {
    // Code here
    return 0;
}
```

**Key Takeaway:** Header files provide ready-made functions; you must include the right header for the functions you use.

---

### 2. The main() Function

**Definition:** `main()` is the entry point of every C program—execution starts here.

**Standard Format:**
```c
int main() {
    // Your code
    return 0;  // Returns success status to OS
}
```

**Return Value:**
- `return 0;` - Program executed successfully
- `return 1;` (or non-zero) - Error occurred

**Note:** Some compilers allow `void main()` but `int main()` is the standard.

---

### 3. Format Specifiers (Quick Review)

| Type | Input (scanf) | Output (printf) | Example |
|------|---------------|-----------------|---------|
| int | `%d` | `%d` | `scanf("%d", &num)` |
| float | `%f` | `%f` | `printf("%.2f", val)` |
| double | `%lf` | `%lf` or `%f` | `scanf("%lf", &d)` |
| char | `%c` | `%c` | `scanf(" %c", &ch)` |
| string | `%s` | `%s` | `scanf("%s", str)` |

**Why & in scanf?**
- `scanf` needs the memory address to store input
- `&` gives the address of the variable
- Exception: Arrays already represent addresses (no & needed)

```c
int num;
scanf("%d", &num);    // Need & for scalar variables

char name[50];
scanf("%s", name);    // No & for arrays
```

---

### 4. Scope of Variables

**Definition:** Scope determines where a variable can be accessed in a program.

**Local Variables:**
- Declared inside a function or block
- Accessible only within that function/block
- Created when function is called, destroyed when function ends

```c
void myFunction() {
    int local_var = 10;  // Local to myFunction
    printf("%d", local_var);
}
// local_var cannot be accessed outside myFunction
```

**Global Variables:**
- Declared outside all functions
- Accessible from any function in the program
- Exist for the entire program duration

```c
int global_var = 100;  // Global variable

void function1() {
    printf("%d", global_var);  // Can access
}

void function2() {
    global_var = 200;  // Can modify
}

int main() {
    printf("%d", global_var);  // Can access
    return 0;
}
```

---

### 5. Loops in C

**Definition:** Loops allow repeated execution of a block of code.

**Loop Categories:**
- **Entry-Controlled:** Condition checked before execution (for, while)
- **Exit-Controlled:** Condition checked after execution (do-while)

---

### 6. For Loop

**Syntax:**
```c
for (initialization; condition; update) {
    // Code to repeat
}
```

**How it works:**
1. **Initialization** - Executed once at start
2. **Condition** - Checked before each iteration
3. **Code Block** - Executed if condition is true
4. **Update** - Executed after each iteration
5. Repeat steps 2-4 until condition is false

**Example:**
```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
// Output: 1 2 3 4 5
```

**Flowchart:**
```
    [Initialize i = 1]
           |
           v
    < i <= 5 ? >---NO---> [Exit loop]
         |
        YES
         |
         v
    [Print i]
         |
         v
    [i++]
         |
         +--------(back to condition)
```

**Use Cases:** When you know the number of iterations in advance.

---

### 7. While Loop

**Syntax:**
```c
while (condition) {
    // Code to repeat
}
```

**How it works:**
1. Check condition
2. If true, execute code block
3. Repeat from step 1
4. If false, exit loop

**Example:**
```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
// Output: 1 2 3 4 5
```

**Use Cases:** When you don't know how many iterations needed (e.g., read until EOF, validate input).


---

### 8. Do-While Loop

**Syntax:**
```c
do {
    // Code to repeat
} while (condition);
```

**Key Difference:** Executes at least once, then checks condition.

**Example:**
```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
// Output: 1 2 3 4 5
```

**Example showing difference:**
```c
int x = 10;

// While loop - won't execute
while (x < 5) {
    printf("While\n");
}

// Do-while - executes once
do {
    printf("Do-While\n");
} while (x < 5);
```

**Use Cases:** Menu systems, input validation (need to execute at least once).

**Teacher Note:** Note the semicolon after `while(condition);` in do-while!

---

### 9. Loop Comparison Table

| Feature | for | while | do-while |
|---------|-----|-------|----------|
| **Type** | Entry-controlled | Entry-controlled | Exit-controlled |
| **When to use** | Known iterations | Unknown iterations | At least one iteration |
| **Syntax complexity** | More compact | Simple | Simple + semicolon |
| **Min executions** | 0 | 0 | 1 |
| **Example use** | Counting, arrays | Reading data | Menu systems |

---

### 10. Break and Continue

**Break Statement:**
- Exits the loop immediately
- Control moves to the statement after the loop

```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;  // Exit loop when i is 5
    }
    printf("%d ", i);
}
// Output: 1 2 3 4
```

**Continue Statement:**
- Skips the rest of current iteration
- Moves to next iteration

```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        continue;  // Skip when i is 3
    }
    printf("%d ", i);
}
// Output: 1 2 4 5
```

**Teacher Note:** Draw flowchart showing how break exits completely while continue jumps to next iteration.

---

### 11. Functions in C

**Definition:** A function is a reusable block of code that performs a specific task.

**Why Use Functions?**
- **Modularity:** Break complex problems into smaller parts
- **Reusability:** Write once, use many times
- **Readability:** Easier to understand and maintain
- **Debugging:** Isolate and fix issues easily

**Function Structure:**
```c
return_type function_name(parameter_list) {
    // Function body
    return value;  // If return_type is not void
}
```

---

### 12. Function Declaration and Definition

**Function Declaration (Prototype):**
- Tells compiler about function before use
- Usually placed before main() or in header files

```c
int add(int a, int b);  // Declaration
```

**Function Definition:**
- Actual implementation of the function

```c
int add(int a, int b) {  // Definition
    return a + b;
}
```

**Function Call:**
```c
int result = add(5, 3);  // Calling the function
```

**Complete Example:**
```c
#include <stdio.h>

// Declaration
int add(int a, int b);

int main() {
    int sum = add(5, 3);  // Call
    printf("Sum: %d\n", sum);
    return 0;
}

// Definition
int add(int a, int b) {
    return a + b;
}
```

---

### 13. Types of Functions

**1. No arguments, No return value:**
```c
void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet();  // Call
    return 0;
}
```

**2. With arguments, No return value:**
```c
void printSum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

int main() {
    printSum(5, 3);
    return 0;
}
```

**3. No arguments, With return value:**
```c
int getNumber() {
    return 42;
}

int main() {
    int num = getNumber();
    printf("%d\n", num);
    return 0;
}
```

**4. With arguments and return value:**
```c
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(4, 5);
    printf("Result: %d\n", result);
    return 0;
}
```

**Teacher Note:** Emphasize that return type must match the value being returned.

---

### 14. Parameter Passing

**Pass by Value:**
- C uses pass by value by default
- A copy of the argument is passed
- Changes inside function don't affect original variable

```c
void modify(int x) {
    x = 100;  // Only modifies the copy
}

int main() {
    int num = 10;
    modify(num);
    printf("%d\n", num);  // Still prints 10
    return 0;
}
```

**Teacher Note:** Pointers allow "pass by reference" behavior—covered in advanced topics.

---

### 15. Comments in C

**Single-line Comments:**
```c
// This is a single-line comment
int x = 5;  // Initialize x
```

**Multi-line Comments:**
```c
/*
 * This is a multi-line comment
 * Used for longer explanations
 * or documentation
 */
```

**Good Commenting Practices:**
- Explain WHY, not WHAT (code shows what)
- Comment complex logic
- Use comments to structure code sections
- Keep comments updated with code changes

```c
// Good comment
// Calculate discount for senior citizens (age >= 65)
if (age >= 65) {
    discount = 0.20;
}

// Bad comment
// Check if age is greater than or equal to 65
if (age >= 65) {
    discount = 0.20;
}
```

---

## Example Code (C)

### Example 1: Loop Types Comparison

**File:** `day3_loops_demo.c`

```c
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
```

**Compile & Run:**
```bash
gcc -std=c11 -Wall day3_loops_demo.c -o day3_loops_demo
./day3_loops_demo
```

**Output:**
```
For loop: 1 2 3 4 5 
While loop: 1 2 3 4 5 
Do-while loop: 1 2 3 4 5
```

---

### Example 2: Break and Continue

**File:** `day3_break_continue.c`

```c
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
```

**Compile & Run:**
```bash
gcc -std=c11 -Wall day3_break_continue.c -o day3_break_continue
./day3_break_continue
```

**Output:**
```
Break example (exit at 5):
1 2 3 4 

Continue example (skip 3 and 6):
1 2 4 5 7 8
```

---

### Example 3: Local vs Global Variables

**File:** `day3_scope.c`

```c
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
```

**Compile & Run:**
```bash
gcc -std=c11 -Wall day3_scope.c -o day3_scope
./day3_scope
```

**Output:**
```
Main - Global: 100
Function1 - Local: 10, Global: 100
Function2 - Local: 20, Global: 200
Main - Global after changes: 200
```

---

### Example 4: Function with Return Value

**File:** `day3_factorial.c`

```c
/*
 * Example 4: Function to calculate factorial
 * Demonstrates function with parameters and return value
 */

#include <stdio.h>

// Function declaration
int factorial(int n);

int main() {
    int num, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }
    
    return 0;
}

// Function definition
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
```

**Compile & Run:**
```bash
gcc -std=c11 -Wall day3_factorial.c -o day3_factorial
./day3_factorial
```

**Sample I/O:**
```
Enter a positive integer: 5
Factorial of 5 = 120
```

---

### Example 5: Function with Loops

**File:** `day3_sum_even.c`

```c
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
```

**Compile & Run:**
```bash
gcc -std=c11 -Wall day3_sum_even.c -o day3_sum_even
./day3_sum_even
```

**Sample I/O:**
```
Enter limit: 10
Sum of even numbers from 1 to 10 = 30
```
*(2 + 4 + 6 + 8 + 10 = 30)*

---

### Example 6: Complete Program (Loops + Functions)

**File:** `day3_multiplication_table.c`

```c
/*
 * Example 6: Multiplication table generator
 * Demonstrates modular programming with functions and loops
 */

#include <stdio.h>

// Function to print multiplication table
void printTable(int num, int range) {
    printf("\nMultiplication Table of %d:\n", num);
    printf("-------------------------\n");
    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

// Function to get valid input
int getPositiveNumber(const char *prompt) {
    int num;
    do {
        printf("%s", prompt);
        scanf("%d", &num);
        if (num <= 0) {
            printf("Please enter a positive number!\n");
        }
    } while (num <= 0);
    return num;
}

int main() {
    int number, range;
    char choice;
    
    do {
        number = getPositiveNumber("Enter number for table: ");
        range = getPositiveNumber("Enter range (how many multiples): ");
        
        printTable(number, range);
        
        printf("\nGenerate another table? (y/n): ");
        scanf(" %c", &choice);
        
    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you!\n");
    return 0;
}
```

**Compile & Run:**
```bash
gcc -std=c11 -Wall day3_multiplication_table.c -o day3_mult_table
./day3_mult_table
```

**Sample I/O:**
```
Enter number for table: 7
Enter range (how many multiples): 5

Multiplication Table of 7:
-------------------------
7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35

Generate another table? (y/n): n
Thank you!
```

---

## Mini Project: Prime Number Checker

**Problem:** Create a program with a function to check if a number is prime.

**Step 1: Pseudocode**
```
FUNCTION isPrime(n):
    IF n <= 1 THEN
        RETURN false
    FOR i = 2 TO sqrt(n) DO
        IF n % i == 0 THEN
            RETURN false
    RETURN true

MAIN:
    INPUT number
    IF isPrime(number) THEN
        OUTPUT "Prime"
    ELSE
        OUTPUT "Not Prime"
```

**Step 2: Implementation**

**File:** `day3_prime_checker.c`

```c
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
```

**Compile & Run:**
```bash
gcc -std=c11 -Wall day3_prime_checker.c -o day3_prime_checker
./day3_prime_checker
```

**Test Cases:**
```
Input: 7  → Output: 7 is a PRIME number
Input: 12 → Output: 12 is NOT a prime number
Input: 1  → Output: 1 is NOT a prime number
Input: 29 → Output: 29 is a PRIME number
```

---

## In-Class Activities

### Activity 1: Trace a Loop (5 min)

Give students this code and ask them to trace it manually:
```c
int sum = 0;
for (int i = 1; i <= 4; i++) {
    sum += i * 2;
}
printf("%d", sum);
```

**Answer:** 20 (2 + 4 + 6 + 8 = 20)

---

### Activity 2: Complete the Function (5 min)

Provide half-written function, ask students to complete:
```c
// Function to find maximum of two numbers
int findMax(int a, int b) {
    // Complete this function
}
```

**Solution:**
```c
int findMax(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
```

---

### Activity 3: Debug Common Errors (5 min)

Show buggy code and ask students to find errors:
```c
void printNumbers() {
    for (int i = 1; i <= 5 i++) {
        printf("%d ", i)
    }
}
```

**Errors:**
1. Missing semicolon after `i <= 5`
2. Missing semicolon after `printf`

---

## Exercises (Homework)

### Exercise 1: Square Function ⭐
Write a function that returns the square of a number.

**Hint:** `int square(int n)`

---

### Exercise 2: Sum of N Natural Numbers ⭐
Use a for loop to calculate sum of first N natural numbers.

**Sample:** N=10 → Sum=55

---

### Exercise 3: Count Even and Odd ⭐⭐
Write a program using while loop to count even and odd numbers in a given range.

**Sample Input:** Start=1, End=10  
**Sample Output:** Even=5, Odd=5

---

### Exercise 4: Multiplication Table (do-while) ⭐⭐
Print multiplication table using do-while loop.

---

### Exercise 5: Factorial with Function ⭐⭐
Create a function to calculate factorial and call it from main.

---

### Exercise 6: Prime Number Function ⭐⭐⭐
Write a function that checks if a number is prime. Use it to print all primes from 1 to N.

---

### Exercise 7: Power Function ⭐⭐⭐
Write a function to calculate x^y (x to the power y) using loops.

**Sample:** power(2, 3) → 8

---

### Exercise 8: Modular Program ⭐⭐⭐
Write a program with multiple functions:
- Input function to get number
- Processing function to check if palindrome
- Output function to display result

---

## Solutions

### Solution 1: Square Function

```c
#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Square of %d = %d\n", num, square(num));
    return 0;
}
```

---

### Solution 2: Sum of N Natural Numbers

```c
#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter N: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
```

---

### Solution 3: Count Even and Odd

```c
#include <stdio.h>

int main() {
    int start, end, even_count = 0, odd_count = 0;
    
    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);
    
    int i = start;
    while (i <= end) {
        if (i % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
        i++;
    }
    
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);
    
    return 0;
}
```

---

### Solution 4: Multiplication Table (do-while)

```c
#include <stdio.h>

int main() {
    int num, i = 1;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    printf("\nMultiplication Table of %d:\n", num);
    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);
    
    return 0;
}
```

---

### Solution 5: Factorial with Function

```c
#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial not defined for negative numbers\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    
    return 0;
}
```

---

### Solution 6: Prime Number Function

```c
#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    
    printf("Enter N: ");
    scanf("%d", &n);
    
    printf("Prime numbers from 1 to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
```

---

### Solution 7: Power Function

```c
#include <stdio.h>

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    int x, y;
    
    printf("Enter base: ");
    scanf("%d", &x);
    printf("Enter exponent: ");
    scanf("%d", &y);
    
    printf("%d ^ %d = %d\n", x, y, power(x, y));
    
    return 0;
}
```

---

### Solution 8: Modular Program (Palindrome)

```c
#include <stdio.h>

// Input function
int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

// Processing function
int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    return (original == reversed);
}

// Output function
void displayResult(int num, int result) {
    if (result) {
        printf("%d is a palindrome\n", num);
    } else {
        printf("%d is NOT a palindrome\n", num);
    }
}

int main() {
    int number = getNumber();
    int result = isPalindrome(number);
    displayResult(number, result);
    return 0;
}
```

---

## Short Quiz (8 Questions)

**1.** Which loop executes at least once?  
a) for  
b) while  
c) do-while  
d) All of the above

**2.** What is the output of this code?
```c
for (int i = 0; i < 3; i++) {
    if (i == 1) continue;
    printf("%d ", i);
}
```
a) 0 1 2  
b) 0 2  
c) 1 2  
d) 0 1

**3.** What does `break` statement do?  
a) Skips current iteration  
b) Exits the loop  
c) Restarts the loop  
d) Pauses the loop

**4.** Which is correct function declaration?  
a) function int add(int a, int b)  
b) int add(int a, int b);  
c) add int(int a, int b);  
d) int add(a, b);

**5.** What is the scope of a local variable?  
a) Entire program  
b) Only within its function/block  
c) All functions in the file  
d) Global scope

**6.** What does `void` return type mean?  
a) Returns nothing  
b) Returns 0  
c) Returns null  
d) Returns empty string

**7.** How are arguments passed to functions in C by default?  
a) Pass by reference  
b) Pass by value  
c) Pass by pointer  
d) Pass by copy reference

**8.** What will be the output?
```c
int x = 5;
void func() {
    int x = 10;
    printf("%d", x);
}
func();
```
a) 5  
b) 10  
c) 15  
d) Error

**Answer Key:** 1-c, 2-b, 3-b, 4-b, 5-b, 6-a, 7-b, 8-b

---

## Code Files Section

### File 1: day3_loops_demo.c
**Purpose:** Compare for, while, and do-while loops  
**Topics:** Loop syntax, iteration control  
**Compile:** `gcc -std=c11 -Wall day3_loops_demo.c -o day3_loops_demo`  
**Run:** `./day3_loops_demo`  
**Output:** All three loops print 1 2 3 4 5

### File 2: day3_break_continue.c
**Purpose:** Demonstrate break and continue statements  
**Topics:** Loop control, early exit, skipping iterations  
**Compile:** `gcc -std=c11 -Wall day3_break_continue.c -o day3_break_continue`  
**Run:** `./day3_break_continue`  
**Test:** Observe which numbers are printed/skipped

### File 3: day3_scope.c
**Purpose:** Show local vs global variable behavior  
**Topics:** Variable scope, lifetime, accessibility  
**Compile:** `gcc -std=c11 -Wall day3_scope.c -o day3_scope`  
**Run:** `./day3_scope`  
**Output:** Demonstrates how global variables are shared across functions

### File 4: day3_factorial.c
**Purpose:** Calculate factorial using function  
**Topics:** Function parameters, return values, loops  
**Compile:** `gcc -std=c11 -Wall day3_factorial.c -o day3_factorial`  
**Run:** `./day3_factorial`  
**Test Cases:** Try 0 (returns 1), 5 (returns 120), 10 (returns 3628800)

### File 5: day3_sum_even.c
**Purpose:** Sum even numbers using function and loop  
**Topics:** Combining functions with loops, return values  
**Compile:** `gcc -std=c11 -Wall day3_sum_even.c -o day3_sum_even`  
**Run:** `./day3_sum_even`  
**Test Cases:** Try 10 (returns 30), 20 (returns 110)

### File 6: day3_multiplication_table.c
**Purpose:** Complete modular program with multiple functions  
**Topics:** Modular design, input validation, do-while menus  
**Compile:** `gcc -std=c11 -Wall day3_multiplication_table.c -o day3_mult_table`  
**Run:** `./day3_mult_table`  
**Test:** Generate tables for different numbers

### File 7: day3_prime_checker.c
**Purpose:** Mini project - check if number is prime  
**Topics:** Function design, algorithm implementation, logical thinking  
**Compile:** `gcc -std=c11 -Wall day3_prime_checker.c -o day3_prime_checker`  
**Run:** `./day3_prime_checker`  
**Test Cases:** Primes (2, 3, 5, 7, 11), Non-primes (4, 6, 8, 9, 10)

---

## Exam Readiness Checklist

Students must be able to:

✓ **Explain differences among for, while, and do-while loops** with examples  
✓ **Write all three loop types** correctly from memory  
✓ **Use break and continue** appropriately in loops  
✓ **Define and call functions** with correct syntax  
✓ **Match function return types** with returned values  
✓ **Understand pass by value** mechanism in C  
✓ **Differentiate between local and global variables** with code examples  
✓ **Explain why & is required in scanf** for scalar variables  
✓ **Write modular programs** using multiple functions  
✓ **Use proper commenting** and code structure  
✓ **Trace function calls and loops** manually on paper  
✓ **Compile code without warnings** using gcc -Wall

---

## Common Mistakes to Avoid

### 1. Infinite Loops
```c
// WRONG: Forgot to increment
int i = 0;
while (i < 5) {
    printf("%d", i);
    // Missing i++
}

// CORRECT:
int i = 0;
while (i < 5) {
    printf("%d", i);
    i++;
}
```

### 2. Missing Return Statement
```c
// WRONG: Function expects return value
int add(int a, int b) {
    int sum = a + b;
    // Missing return!
}

// CORRECT:
int add(int a, int b) {
    int sum = a + b;
    return sum;
}
```

### 3. Semicolon in do-while
```c
// WRONG: Missing semicolon
do {
    printf("Hello");
} while (condition)  // Need semicolon here!

// CORRECT:
do {
    printf("Hello");
} while (condition);
```

### 4. Function Call Mismatch
```c
int multiply(int a, int b);

// WRONG: Wrong number of arguments
int result = multiply(5);

// CORRECT:
int result = multiply(5, 3);
```

### 5. Variable Scope Confusion
```c
void myFunction() {
    int x = 10;
}

int main() {
    printf("%d", x);  // ERROR: x not accessible here
    return 0;
}
```

---

## Quick Reference Card

### Loop Syntax Quick Reference

**For Loop:**
```c
for (init; condition; update) {
    // code
}
```

**While Loop:**
```c
while (condition) {
    // code
}
```

**Do-While Loop:**
```c
do {
    // code
} while (condition);  // Note semicolon!
```

### Function Syntax Quick Reference

**Declaration:**
```c
return_type function_name(parameter_list);
```

**Definition:**
```c
return_type function_name(parameter_list) {
    // function body
    return value;  // if not void
}
```

**Call:**
```c
variable = function_name(arguments);
```

### When to Use Which Loop?

| Situation | Recommended Loop |
|-----------|------------------|
| Know exact iterations | `for` |
| Unknown iterations, might be 0 | `while` |
| Must execute at least once | `do-while` |
| Menu systems | `do-while` |
| Counting/indexing | `for` |
| Reading until condition | `while` |

---

## Programming Best Practices

### 1. Function Design
- **One function, one task** - Keep functions focused
- **Meaningful names** - `calculateArea()` not `calc()`
- **Consistent naming** - camelCase or snake_case, pick one
- **Limit parameters** - More than 4-5 parameters is too many

### 2. Loop Design
- **Initialize properly** - Don't use uninitialized loop variables
- **Clear exit condition** - Make sure loop can terminate
- **Update consistently** - Don't forget to modify loop variable
- **Use appropriate type** - Choose right loop for the task

### 3. Code Organization
```c
// GOOD STRUCTURE:
#include <stdio.h>

// Constants
#define MAX 100

// Function declarations
int calculate(int n);
void display(int result);

// Main function
int main() {
    // Code here
    return 0;
}

// Function definitions
int calculate(int n) {
    // Implementation
}

void display(int result) {
    // Implementation
}
```

### 4. Commenting Guidelines
- Comment complex algorithms
- Explain function purpose
- Document assumptions
- Don't over-comment obvious code
- Keep comments updated

---

## Advanced Topics Preview

After mastering Day 1-3, you'll be ready for:

### Arrays
- Declaring and initializing arrays
- Array indexing and traversal
- Multi-dimensional arrays
- Array operations

### Pointers
- Pointer basics and dereferencing
- Pointer arithmetic
- Pointers and arrays
- Pass by reference using pointers

### Strings
- String declaration and initialization
- String library functions
- String manipulation
- Character arrays vs string pointers

### Structures
- Defining custom data types
- Structure members
- Arrays of structures
- Nested structures

### File Handling
- Opening and closing files
- Reading from files
- Writing to files
- File pointers and modes

---

## Practice Strategy for Success

### Daily Practice (30 minutes)
1. **Day 1:** Write 3 different loop programs
2. **Day 2:** Write 5 small functions
3. **Day 3:** Combine loops and functions
4. **Day 4:** Solve problems from scratch
5. **Day 5:** Review and refactor old code

### Week Before Exam
- Review all examples from Day 1-3
- Practice writing code on paper
- Trace programs manually
- Memorize syntax patterns
- Solve past exam papers

### During Exam
1. Read question carefully
2. Write pseudocode first
3. Code in small steps
4. Test with simple inputs mentally
5. Check syntax (semicolons, braces)
6. Add comments if time permits

---

## Debugging Tips

### Compilation Errors
```bash
# Always compile with warnings
gcc -Wall -Wextra -std=c11 file.c -o output

# Common errors:
# - Missing semicolons → Look at line number
# - Undeclared functions → Add declaration or #include
# - Type mismatches → Check return types
# - Missing braces → Count opening and closing
```

### Logical Errors
- **Add printf statements** to trace variable values
- **Test edge cases** (0, negative, maximum values)
- **Simplify** - Comment out code sections to isolate problem
- **Trace manually** - Follow execution step by step on paper

### Runtime Errors
- **Division by zero** - Add checks before division
- **Infinite loops** - Verify loop variable is updated
- **Wrong output** - Check operator precedence
- **Function issues** - Verify return type matches

---

## Summary

### What We Covered Today

✅ **Program Structure:** Header files, main function, modular design  
✅ **Variable Scope:** Local, global, and static variables  
✅ **Loops:** for, while, do-while with break/continue  
✅ **Functions:** Declaration, definition, calling, parameters, return values  
✅ **Best Practices:** Comments, code organization, debugging

### Key Concepts to Master

1. **Loop Selection:** Choose the right loop for the task
2. **Function Design:** Write reusable, single-purpose functions
3. **Scope Management:** Understand where variables are accessible
4. **Modular Programming:** Break problems into functions
5. **Code Quality:** Comment, indent, and organize properly

### Most Important Takeaways

- **Loops** repeat code; choose based on your needs
- **Functions** make code reusable and organized
- **Local variables** are safer than global variables
- **Pass by value** means functions work with copies
- **Always initialize** variables before use
- **Test thoroughly** with different inputs

---

## Additional Practice Problems

### Pattern Printing
1. Print right triangle of stars
2. Print pyramid pattern
3. Print Floyd's triangle
4. Print number diamond

### Number Series
1. Fibonacci series up to N terms
2. Armstrong numbers in range
3. Perfect numbers
4. Sum of digits using recursion (preview)

### Function Challenges
1. Function to check if year is leap year
2. Function to convert temperature (C to F and vice versa)
3. Function to find GCD of two numbers
4. Function to generate first N terms of series

---

## Resources for Further Learning

1. **"The C Programming Language"** - Kernighan & Ritchie (Chapters 3-4)
2. **"C Programming: A Modern Approach"** - K.N. King (Chapters 6-9)
3. **GeeksforGeeks** - C Loops and Functions sections
4. **Programiz** - Interactive C tutorials with examples
5. **Learn-C.org** - Practice exercises with instant feedback
6. **HackerRank** - C programming challenges
7. **LeetCode** - Algorithm problems (start with Easy)

---

## What's Next: Beyond Fundamentals

After completing Days 1-3, you have a solid foundation in C programming. Next steps:

### Immediate Next Topics
- **Arrays:** Store multiple values of same type
- **Strings:** Work with text data
- **Pointers:** Direct memory manipulation
- **Structures:** Create custom data types

### Intermediate Topics
- **Dynamic memory allocation:** malloc, calloc, free
- **File I/O:** Read/write data to files
- **Preprocessor directives:** Macros, conditional compilation
- **Command-line arguments:** argc, argv

### Advanced Topics
- **Data structures:** Linked lists, stacks, queues, trees
- **Algorithms:** Sorting, searching, recursion
- **System programming:** Process management, signals
- **Multi-file projects:** Separate compilation, makefiles

---

## Final Tips for Exam Success

### Technical Preparation
✓ Practice writing code on paper (no autocomplete!)  
✓ Memorize loop and function syntax patterns  
✓ Review common algorithms (factorial, prime, palindrome)  
✓ Understand compilation process and error messages  
✓ Know when to use which loop type

### Problem-Solving Approach
1. **Understand** the problem completely
2. **Plan** using pseudocode or flowchart
3. **Code** in small, testable chunks
4. **Test** with edge cases
5. **Debug** systematically

### Time Management
- Solve easier problems first
- Don't get stuck on one problem
- Leave time for review
- Check syntax carefully
- Add comments if required

### Common Exam Patterns
- Write a function to... (most common)
- Complete the given code
- Find and fix errors
- Trace program output
- Choose correct syntax

---

## Congratulations!

You've completed the 3-day C Programming Fundamentals course. You now know:

✅ Program structure and syntax  
✅ Variables and data types  
✅ Operators and expressions  
✅ Decision-making with conditions  
✅ Loops for repetition  
✅ Functions for modularity  
✅ Scope and program organization

**You're ready to write complete C programs!**

Continue practicing daily, experiment with variations, and challenge yourself with increasingly complex problems. Programming is a skill that improves with consistent practice.

**Good luck with your exam!**

---

## End of Day 3

**Course Complete:** Days 1-3 (9 hours total)

**Homework:** 
- Complete all 8 exercises
- Review all code files
- Practice writing functions from scratch
- Prepare for quiz/exam

**Next Steps:** 
- Explore arrays and strings
- Start working on small projects
- Join online coding communities
- Keep practicing daily!

**Questions?** Review the examples, try the exercises, and don't hesitate to experiment and learn by doing!