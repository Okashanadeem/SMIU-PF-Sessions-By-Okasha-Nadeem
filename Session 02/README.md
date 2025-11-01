# Day 2 — Data Types, Operators & Decision-Making in C
## C Programming Fundamentals

**Duration:** 90 minutes (1 hour 30 minutes)

**Prerequisites:** Day 1 concepts (variables, syntax, pseudocode, basic I/O)

---

## Learning Objectives

By the end of this session, students will be able to:

1. Use different data types correctly and understand type conversion
2. Apply arithmetic, relational, and logical operators in expressions
3. Understand and apply operator precedence rules
4. Write conditional logic using if, if-else, and nested conditions
5. Debug and test decision-based programs
6. Combine multiple conditions using logical operators

---

## Concept Explanations

### 1. Data Types (Deep Dive)

**Definition:** Data types specify the type and size of data that variables can store.

**Primitive Data Types in C:**


| **Data Type**               | **Size** | **Range / Precision**           | **Use**                                | **Example**                  | **Use Case** |
| --------------------------- | -------- | ------------------------------- | -------------------------------------- | ---------------------------- |------------- |
| `int` (Integer)             | 4 bytes  | −2,147,483,648 to 2,147,483,647 | Whole numbers (e.g., age, count)       | `int age = 21;`              |     `%d`     |
| `char` (Character)          | 1 byte   | —                               | Single characters                      | `char grade = 'A';`          |     `%c`     |
| `float` (Floating-point)    | 4 bytes  | ~6–7 decimal digits             | Decimal numbers with limited precision | `float price = 19.99;`       |     `%f`     |
| `double` (Double-precision) | 8 bytes  | ~15–16 decimal digits           | High-precision decimal numbers         | `double pi = 3.14159265359;` |     `%lf`    |

---

### 2. Declaration vs Initialization

**Declaration:** Creating a variable (reserves memory)
```c
int x;        // Declaration only (garbage value)
float price;
```

**Initialization:** Assigning first value
```c
int x = 10;           // Declaration + initialization
float price = 99.99;
```

**Separate Operations:**
```c
int age;              // Declare
age = 21;             // Initialize later
```

---

### 3. Operators Overview

**Definition:** Operators are symbols that perform operations on operands (variables/values).

**Categories we'll cover:**
1. Arithmetic Operators
2. Relational Operators
3. Logical Operators
4. (Brief) Bitwise Operators

---

### 4. Arithmetic Operators

| Operator | Name | Example | Result |
|----------|------|---------|--------|
| `+` | Addition | `5 + 3` | `8` |
| `-` | Subtraction | `5 - 3` | `2` |
| `*` | Multiplication | `5 * 3` | `15` |
| `/` | Division | `5 / 2` | `2` (int division) |
| `/` | Division | `5.0 / 2` | `2.5` (float division) |
| `%` | Modulus | `5 % 2` | `1` (remainder) |

**Important Notes:**
- **Integer Division:** `7 / 2` gives `3`, not `3.5`
- **Modulus:** Only works with integers
- **Division by Zero:** Runtime error (undefined behavior)

**Code Example:**
```c
int a = 7, b = 2;
printf("%d / %d = %d\n", a, b, a / b);      // Output: 7 / 2 = 3
printf("%d %% %d = %d\n", a, b, a % b);     // Output: 7 % 2 = 1

float x = 7.0, y = 2.0;
printf("%.1f / %.1f = %.1f\n", x, y, x / y); // Output: 7.0 / 2.0 = 3.5
```

---

### 5. Relational Operators

**Definition:** Compare two values and return true (1) or false (0).

| Operator | Meaning | Example | Result |
|----------|---------|---------|--------|
| `==` | Equal to | `5 == 5` | `1` (true) |
| `!=` | Not equal | `5 != 3` | `1` (true) |
| `>` | Greater than | `5 > 3` | `1` (true) |
| `<` | Less than | `5 < 3` | `0` (false) |
| `>=` | Greater or equal | `5 >= 5` | `1` (true) |
| `<=` | Less or equal | `5 <= 3` | `0` (false) |

**Common Mistake:** Using `=` (assignment) instead of `==` (comparison)
```c
if (x = 5)  // WRONG: assigns 5 to x (always true)
if (x == 5) // CORRECT: compares x with 5
```


---

### 6. Logical Operators

**Definition:** Combine multiple conditions.

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `&&` | AND | True if BOTH conditions true | `(x > 0 && x < 10)` |
| `||` | OR | True if ANY condition true | `(x < 0 || x > 100)` |
| `!` | NOT | Reverses the condition | `!(x == 5)` |

**Truth Table:**
```
A     B     A && B    A || B    !A
0     0       0         0       1
0     1       0         1       1
1     0       0         1       0
1     1       1         1       0
```

**Example:**
```c
int age = 20;
int hasID = 1;      // 1 = true, 0 = false

// Must be 18+ AND have ID
if (age >= 18 && hasID) {
    printf("Can enter club\n");
}

// Can get discount if student OR senior
if (isStudent || age >= 65) {
    printf("Discount applies\n");
}
```

---

### 7. Bitwise Operators (Brief Overview)

**Definition:** Operate on individual bits of integers.

| Operator | Name | Example | Binary Operation |
|----------|------|---------|------------------|
| `&` | AND | `5 & 3` | `0101 & 0011 = 0001` (1) |
| `|` | OR | `5 | 3` | `0101 | 0011 = 0111` (7) |
| `^` | XOR | `5 ^ 3` | `0101 ^ 0011 = 0110` (6) |
| `<<` | Left shift | `5 << 1` | `0101 << 1 = 1010` (10) |
| `>>` | Right shift | `5 >> 1` | `0101 >> 1 = 0010` (2) |

**Simple Example:**
```c
int a = 5;    // Binary: 0101
int b = 3;    // Binary: 0011

printf("%d & %d = %d\n", a, b, a & b);  // 1 (0001)
printf("%d | %d = %d\n", a, b, a | b);  // 7 (0111)
printf("%d ^ %d = %d\n", a, b, a ^ b);  // 6 (0110)
```

---

### 8. Operator Precedence and Associativity

**Definition:** Rules that determine the order in which operators are evaluated.

**Common Precedence (High to Low):**

| Priority | Operators | Example |
|----------|-----------|---------|
| 1 (Highest) | `()` | Parentheses |
| 2 | `!`, `++`, `--` | Unary operators |
| 3 | `*`, `/`, `%` | Multiplicative |
| 4 | `+`, `-` | Additive |
| 5 | `<`, `<=`, `>`, `>=` | Relational |
| 6 | `==`, `!=` | Equality |
| 7 | `&&` | Logical AND |
| 8 | `||` | Logical OR |
| 9 (Lowest) | `=` | Assignment |

**Examples:**
```c
int result;

result = 2 + 3 * 4;        // = 2 + 12 = 14 (not 20)
result = (2 + 3) * 4;      // = 5 * 4 = 20

result = 10 > 5 && 3 < 7;  // = 1 && 1 = 1 (true)
result = 10 > 5 || 3 > 7;  // = 1 || 0 = 1 (true)
```

**Associativity:**
- **Left to Right:** `a + b + c` evaluated as `(a + b) + c`
- **Right to Left:** `a = b = c` evaluated as `a = (b = c)`

---

### 9. Decision-Making: if Statement

**Syntax:**
```c
if (condition) {
    // Code executes if condition is true
}
```

**Example:**
```c
int marks = 75;

if (marks >= 50) {
    printf("Student passed!\n");
}
```

**How it works:**
- Condition is evaluated (true = non-zero, false = 0)
- If true, code block executes
- If false, code block is skipped

---

### 10. Decision-Making: if-else Statement

**Syntax:**
```c
if (condition) {
    // Executes if condition is true
} else {
    // Executes if condition is false
}
```

**Example:**
```c
int age = 16;

if (age >= 18) {
    printf("You can vote\n");
} else {
    printf("You cannot vote yet\n");
}
```

**Flowchart:**
```
         [ condition ]
            /    \
          YES    NO
           |      |
      [Block A] [Block B]
           |      |
           \      /
            \    /
              \/
           [Continue]
```

---

### 11. Decision-Making: Nested if-else

**Definition:** if statements inside other if statements.

**Syntax:**
```c
if (condition1) {
    if (condition2) {
        // Executes if both true
    } else {
        // Executes if condition1 true, condition2 false
    }
} else {
    // Executes if condition1 false
}
```

**Example: Find Largest of Three Numbers**
```c
int a = 10, b = 20, c = 15;

if (a >= b) {
    if (a >= c) {
        printf("Largest: %d\n", a);
    } else {
        printf("Largest: %d\n", c);
    }
} else {
    if (b >= c) {
        printf("Largest: %d\n", b);
    } else {
        printf("Largest: %d\n", c);
    }
}
```

---

### 12. if-else Ladder

**Syntax:**
```c
if (condition1) {
    // Code
} else if (condition2) {
    // Code
} else if (condition3) {
    // Code
} else {
    // Default code
}
```

**Example: Grade Assignment**
```c
int marks = 85;

if (marks >= 90) {
    printf("Grade: A+\n");
} else if (marks >= 80) {
    printf("Grade: A\n");
} else if (marks >= 70) {
    printf("Grade: B\n");
} else if (marks >= 60) {
    printf("Grade: C\n");
} else {
    printf("Grade: F\n");
}
```

---

## Example Code (C)

### Example 1: Operators Demo

**File:** `operators.c`

> Compile & Run

**Output:**
```
=== Arithmetic Operators ===
10 + 3 = 13
10 - 3 = 7
10 * 3 = 30
10 / 3 = 3
10 % 3 = 1

=== Relational Operators ===
10 == 3: 0
10 != 3: 1
10 > 3: 1
10 < 3: 0

=== Logical Operators ===
1 && 0 = 0
1 || 0 = 1
!1 = 0
```

---

### Example 2: Bitwise Operators

**File:** `bitwise.c`

> Compile & Run


**Output:**
```
a = 5 (binary: 0101)
b = 3 (binary: 0011)

a & b = 1  (AND: 0001)
a | b = 7  (OR:  0111)
a ^ b = 6  (XOR: 0110)

Left shift: 5 << 1 = 10 (multiply by 2)
Right shift: 5 >> 1 = 2 (divide by 2)
```

---

### Example 3: if-else Statement

**File:** `ifelse.c`

> Compile & Run

**Sample:**
```
Enter marks: 65
Result: PASS

Enter marks: 42
Result: FAIL
```

---

### Example 4: Nested if - Largest of Three

**File:** `largest_three.c`

> Compile & Run

**Sample:**
```
Enter three numbers: 10 25 15
Largest: 25
```

---

### Example 5: Operator Precedence

**File:** `precedence.c`

> Compile & Run

**Output:**
```
2 + 3 * 4 = 14
(2 + 3) * 4 = 20
10 > 5 && 3 < 7 = 1
5 + 10 > 15 || 10 * 2 == 20 = 1
```

---

## Task by Our Instructor:

### 💻 **Task: Restaurant Menu Program in C**

**Objective:**
Create a simple C program that acts like a mini restaurant ordering system.

**Instructions:**

1. Display a welcome message to the user.
2. Show a menu with 3–5 dishes and their prices.
3. Ask the user to select one dish by entering its number.
4. When the user selects a dish, confirm the order.
5. After confirmation, show the final bill (include a small tax, e.g., 5%).
6. End the program with a thank-you message.

**Expected Output Example:**

```
Welcome to The Food Lounge!

1. Burger - $5.50
2. Pizza  - $8.00
3. Pasta  - $6.25

Please select a dish (1-3): 2
You selected Pizza.
Click '1' to confirm your order: 1

Your total bill is: $8.40
Thank you for dining with us!
```

---

## Live Coding Activities

### Activity 1: Debug Faulty Code 

```c
int marks = 85
if (marks = 90) {
    printf("Grade: A+\n");
}
```

---

### Activity 2: Predict Output 

```c
int x = 5, y = 10;
printf("%d\n", x > 3 && y < 15);  // ?
printf("%d\n", x > 10 || y > 5);  // ?
printf("%d\n", !(x == 5));        // ?
```

---

## Short Quiz (8 Questions)

**1.** What is the result of `10 / 3` in C?  
a) 3.33  
b) 3  
c) 4  
d) 3.0

**2.** Which operator is used to check equality?  
a) =  
b) ==  
c) !=  
d) ===

**3.** What is the output of `printf("%d", 5 > 3 && 2 < 1);`?  
a) 1  
b) 0  
c) true  
d) false

**4.** What does `%` operator do?  
a) Percentage calculation  
b) Returns remainder  
c) Division  
d) Modifies variable

**5.** Evaluate: `2 + 3 * 4`  
a) 20  
b) 14  
c) 24  
d) 12


**6.** What does `&&` operator require?  
a) At least one condition true  
b) Both conditions true  
c) No conditions true  
d) Exactly one condition true

**7.** Which has highest precedence?  
a) +  
b) *  
c) ()  
d) ==

---

## Code Files Section

### File 1: operators.c
**Purpose:** Demonstrate arithmetic, relational, and logical operators  
**Topics:** Basic operators, printf formatting  
**Compile and Run**
**Output:** Shows results of various operator combinations

### File 2: bitwise.c
**Purpose:** Show bitwise operations with binary explanations  
**Topics:** Bitwise AND, OR, XOR, shift operators  
**Compile and Run**
**Output:** Demonstrates bit manipulation

### File 3: ifelse.c
**Purpose:** Basic if-else decision making  
**Topics:** Conditional statements, pass/fail logic
**Compile and Run**
**Test Cases:** Try marks: 50, 49, 75, 0, 100

### File 4: largest_three.c
**Purpose:** Find maximum using logical operators  
**Topics:** Nested conditions, multiple comparisons
**Compile and Run**
**Test Cases:** (10, 25, 15), (5, 5, 5), (-1, -10, -5)

### File 5: precedence.c
**Purpose:** Demonstrate operator precedence rules  
**Topics:** Order of evaluation, parentheses usage  
**Compile and Run**
**Output:** Shows how expressions are evaluated in order

---

## Resources for Further Learning

1. **"The C Programming Language"** - Kernighan & Ritchie (Chapter 2: Types, Operators)
2. **"C Programming: A Modern Approach"** - K.N. King (Chapter 4: Expressions, Chapter 5: Selection)
3. **GeeksforGeeks** - C Operators and Decision Making tutorials
4. **Learn-C.org** - Interactive exercises on conditionals
5. **Programiz** - C if...else examples and exercises

---