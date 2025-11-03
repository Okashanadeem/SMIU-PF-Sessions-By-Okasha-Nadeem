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

**File:** `loops_demo.c`

> **Compile & Run:**

**Output:**
```
For loop: 1 2 3 4 5 
While loop: 1 2 3 4 5 
Do-while loop: 1 2 3 4 5
```

---

### Example 2: Break and Continue

**File:** `break_continue.c`


> **Compile & Run:**

**Output:**
```
Break example (exit at 5):
1 2 3 4 

Continue example (skip 3 and 6):
1 2 4 5 7 8
```

---

### Example 3: Local vs Global Variables

**File:** `scope.c`

> **Compile & Run:**

**Output:**
```
Main - Global: 100
Function1 - Local: 10, Global: 100
Function2 - Local: 20, Global: 200
Main - Global after changes: 200
```

---

### Example 4: Function with Return Value

**File:** `factorial.c`

> **Compile & Run:**

**Sample I/O:**
```
Enter a positive integer: 5
Factorial of 5 = 120
```

---

### Example 5: Function with Loops

**File:** `sum_even.c`

> **Compile & Run:**

**Sample I/O:**
```
Enter limit: 10
Sum of even numbers from 1 to 10 = 30
```
*(2 + 4 + 6 + 8 + 10 = 30)*

---

### Example 6: Complete Program (Loops + Functions)

**File:** `multiplication_table.c`

> **Compile & Run:**

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

**File:** `prime_checker.c`

> **Compile & Run:**

**Test Cases:**
```
Input: 7  → Output: 7 is a PRIME number
Input: 12 → Output: 12 is NOT a prime number
Input: 1  → Output: 1 is NOT a prime number
Input: 29 → Output: 29 is a PRIME number
```

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


---

## Code Files Section

### File 1: day3_loops_demo.c
**Purpose:** Compare for, while, and do-while loops  
**Topics:** Loop syntax, iteration control  
**Compile:** `gcc -std=c11 -Wall day3_loops_demo.c -o day3_loops_demo`  
**Run:** `./loops_demo`  
**Output:** All three loops print 1 2 3 4 5

### File 2: day3_break_continue.c
**Purpose:** Demonstrate break and continue statements  
**Topics:** Loop control, early exit, skipping iterations  
**Compile:** 
**Run:** `./break_continue`  
**Test:** Observe which numbers are printed/skipped

### File 3: day3_scope.c
**Purpose:** Show local vs global variable behavior  
**Topics:** Variable scope, lifetime, accessibility  
**Compile:** 
**Run:** `./scope`  
**Output:** Demonstrates how global variables are shared across functions

### File 4: day3_factorial.c
**Purpose:** Calculate factorial using function  
**Topics:** Function parameters, return values, loops  
**Compile:** 
**Run:** `./factorial`  
**Test Cases:** Try 0 (returns 1), 5 (returns 120), 10 (returns 3628800)

### File 5: day3_sum_even.c
**Purpose:** Sum even numbers using function and loop  
**Topics:** Combining functions with loops, return values  
**Compile:** 
**Run:** `./sum_even`  
**Test Cases:** Try 10 (returns 30), 20 (returns 110)

### File 6: day3_multiplication_table.c
**Purpose:** Complete modular program with multiple functions  
**Topics:** Modular design, input validation, do-while menus  
**Compile:** 
**Run:** `./mult_table`  
**Test:** Generate tables for different numbers

### File 7: day3_prime_checker.c
**Purpose:** Mini project - check if number is prime  
**Topics:** Function design, algorithm implementation, logical thinking  
**Compile:**   
**Run:** `./prime_checker`  
**Test Cases:** Primes (2, 3, 5, 7, 11), Non-primes (4, 6, 8, 9, 10)

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

## Congratulations!

You've completed the 3-day C Programming Fundamentals course.

---

## End of Day 3

---

## 👨‍💻 Author

Created with ❤️ By **Okasha Nadeem** for aspiring C programmers

---

**Happy Coding! 🚀**