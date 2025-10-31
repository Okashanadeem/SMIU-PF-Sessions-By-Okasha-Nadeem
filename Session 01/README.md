# Day 1 — Foundations & Variables
## C Programming Fundamentals

**Duration:** 90 minutes (1 hour 30 minutes)

**Prerequisites:** Basic computer use, ability to use text editor and command line

---

## Learning Objectives

By the end of this session, students will be able to:

1. Explain what a program is and the role of compilers
2. Write simple pseudocode and draw basic flowcharts
3. Declare and initialize variables in C with appropriate data types
4. Use proper variable naming conventions
5. Compile and run C programs using GCC
6. Apply format specifiers correctly for input/output operations

---

## Concept Explanations

### 1. What is a Program? What is Programming?

**Definition:** A program is a sequence of instructions that tells a computer what to do. Programming is the process of writing these instructions.

**Example:** A program to calculate rectangle area:
1. Get length from user
2. Get width from user
3. Multiply length by width
4. Display the result

---

### 2. Programming Languages & Compilers

**Programming Languages:** Formal languages used to communicate instructions to a computer.

- **High-Level Languages** (C, Python): Closer to human language, easier to read
- **Low-Level Languages** (Assembly): Closer to hardware, harder for humans


[![Languages Code](../images/low-high-machine-code.jpg)](https://www.educba.com/high-level-languages-vs-low-level-languages)

> 🔗 Click the image or this link to learn more about **High-level, Low-level, and Machine Languages:**  
> [High vs Low Level Languages](https://www.educba.com/high-level-languages-vs-low-level-languages)


**Compiler (Focus for C):**
- Translates entire source code into machine code before execution
- **Process:** Source Code (.c file) → GCC Compiler → Executable → Run
- **Advantage:** Faster execution, errors caught before running

**Diagram:**
```
┌─────────────┐     ┌──────────┐     ┌────────────┐     ┌─────────┐
│ hello.c     │ --> │   GCC    │ --> │  hello     │ --> │ Output  │
│ (C code)    │     │(Compiler)│     │(Executable)│     │         │
└─────────────┘     └──────────┘     └────────────┘     └─────────┘
```

---

### 3. What is an Algorithm?

**Definition:**
A step-by-step procedure or a set of logical instructions designed to perform a specific task or solve a particular problem.

**Key Characteristics:**

* **Finite:** Must complete after a limited number of steps.
* **Definite:** Each step is clear and unambiguous.
* **Input:** Takes zero or more inputs.
* **Output:** Produces at least one output.
* **Effective:** Each step can be carried out precisely.

**Example: Find the Largest of Two Numbers**

```
Step 1: Start
Step 2: Input num1, num2
Step 3: If num1 > num2 then
            Display num1 is greater
        Else
            Display num2 is greater
Step 4: Stop
```

---

### 4. What is Pseudocode?

**Definition:** Plain-language description of program logic that resembles code but isn't tied to any specific language.

**Example 1: Find Maximum of Two Numbers**
```
BEGIN
  INPUT num1
  INPUT num2
  IF num1 > num2 THEN
    SET max = num1
  ELSE
    SET max = num2
  END IF
  OUTPUT max
END
```

---

### 5. What is a Flowchart?

**Definition:** Visual representation of an algorithm using standardized symbols.

[![Flowchart Image](../images/Flowchart-Image.jpg)](https://www.smartdraw.com/flowchart/flowchart-symbols.htm?srsltid=AfmBOopOgvyf9bv0ur3W2HY0OFQx3NOAUSA5EnhU38fynfT3iHlTlLz_)

> 🔗 Click the image or this link to learn more about **Flowchart Symbols:**  
> [SmartDraw – Flowchart Symbols](https://www.smartdraw.com/flowchart/flowchart-symbols.htm?srsltid=AfmBOopOgvyf9bv0ur3W2HY0OFQx3NOAUSA5EnhU38fynfT3iHlTlLz_)

**Example: Check Even or Odd**
```
        (START)
           |
           v
    [ INPUT number ]
           |
           v
    < number % 2 == 0 ? >
       /          \
     YES           NO
      |             |
      v             v
[OUTPUT "Even"] [OUTPUT "Odd"]
      |             |
      v             v
           (END)
```

---

### 6. C Syntax Basics

**Statements:** Single instruction ending with semicolon (;)
```c
int x = 5;           // Declaration
printf("Hello");     // Function call
```

**Blocks:** Group of statements in curly braces `{ }`
```c
{
    int a = 10;
    printf("%d", a);
}
```

**Common Syntax Errors to Watch:**
- Missing semicolons
- Mismatched braces `{ }`
- Case sensitivity: `Printf` vs `printf`
- Using `=` instead of `==` in conditions

---

### 7. Variables

**Definition:** Named location in memory that stores a value.

**Memory Metaphor:** Variables are like labeled boxes—the name is the label, the value is what's inside.

**Variable Lifecycle:**
1. **Declaration:** Creating the variable
2. **Initialization:** Giving initial value
3. **Usage:** Reading/modifying value


---

### 8. Variable Naming Rules

**Must Follow:**
1. Start with letter (a-z, A-Z) or underscore (_)
2. Can contain letters, digits, underscores
3. Cannot use C keywords (int, if, while)
4. Case-sensitive
5. No spaces or special characters

**Valid:** `age`, `student_count`, `_temp`, `totalMarks`  
**Invalid:** `2ndPlace`, `student-name`, `int`, `my age`

**Recommended Style:**
- Use meaningful names: `total_marks` not `tm`
- Use lowercase with underscores

---

### 9. Data Types in C

**int (Integer):**
- Size: 4 bytes
- Range: -2,147,483,648 to 2,147,483,647
- Use: Whole numbers (age, count)
- Example: `int age = 21;`

**char (Character):**
- Size: 1 byte
- Use: Single characters
- Example: `char grade = 'A';`

**float (Floating-point):**
- Size: 4 bytes
- Precision: ~6-7 decimal digits
- Example: `float price = 19.99;`

**double (Double-precision):**
- Size: 8 bytes
- Precision: ~15-16 decimal digits
- Example: `double pi = 3.14159265359;`


---

### 10. Variable Declaration & Constants

**Variable Initialization:**
```c
int age;              // Initialization
int x, y;             // Multiple Initialization
```

**Variable Declaration:**
```c
int age = 21;              // Declaration with initialization
int x = 5, y = 10;         // Multiple declarations
```

**Constants Using `const`:**
```c
const double PI = 3.14159;
const int MAX_STUDENTS = 50;
// PI = 3.14;  // ERROR: cannot modify
```

**Why & with scanf?**  
`scanf()` needs the memory address to store input. Use `&` for scalar variables. Arrays don't need `&` because array names already represent addresses.


---

## Example Code (C)

### Example 1: Hello World

**File:** `hello.c`

---

### Example 2: Variables and Format Specifiers

**File:** `variables.c`

---

### Example 3: Using Constants

**File:** `constants.c`

### Example 4: Complete Problem (Pseudocode → Code)

**Problem:** Read two integers and print the larger one.

**Pseudocode:**
```
BEGIN
  INPUT num1
  INPUT num2
  IF num1 > num2 THEN
    SET larger = num1
  ELSE
    SET larger = num2
  OUTPUT larger
END
```

**C Code:** `larger.c`

---

## Short Quiz (7 Questions)

**1.** What does a compiler do?  
a) Executes code line by line  
b) Translates entire source code to machine code  
c) Debugs your program  
d) Writes code for you

**2.** Which is a valid variable name in C?  
a) 2ndPlace  
b) student-name  
c) _total_marks  
d) int

**3.** What is the correct format specifier for printing an integer?  
a) %f  
b) %c  
c) %d  
d) %s

**4.** Why do we use & with scanf for int variables?  
a) It's optional  
b) To pass the variable's address  
c) To make it faster  
d) To initialize the variable

**5.** What is the size of an int on most modern systems?  
a) 1 byte  
b) 2 bytes  
c) 4 bytes  
d) 8 bytes

**6.** Which symbol represents a decision in a flowchart?  
a) Rectangle  
b) Oval  
c) Diamond  
d) Parallelogram

**7.** What happens if you use an uninitialized variable?  
a) Program won't compile  
b) Variable has value 0  
c) Variable has garbage value  
d) Program crashes

---

## Code Files Section

> I've used GCC Compiler with VS Code for all examples you can use Dev C++ or any other C compiler as well.

### File 1: hello.c
**Purpose:** Basic "Hello World" program  
**Compile:** `gcc hello.c`  
**Run:** `./a.exe`  
**Expected Output:** `Hello, World!`

### File 2: day1_variables.c
**Purpose:** Variable declaration and I/O with format specifiers  
**Compile:** `gcc variables.c`  
**Run:** `./a.exe`  
**Test:** Enter number: 42, Enter name: Ahmed

### File 3: constants.c
**Purpose:** Using const and #define  
**Compile:** `gcc constants.c`  
**Run:** `./a.exe`  
**Expected:** Circle area and tax calculations

### File 4: larger.c
**Purpose:** Find larger of two numbers (demonstrates if-else)  
**Compile:** `gcc larger.c`  
**Run:** `./a.exe`  
**Test Cases:** Try (15, 28), (-5, 3), (10, 10)

---

## Extra Resources & References

1. **"The C Programming Language"** by Kernighan & Ritchie (K&R)
2. **"C Programming: A Modern Approach"** by K.N. King
3. **GeeksforGeeks C Programming** - Comprehensive tutorials
4. **Learn-C.org** - Interactive C tutorial
5. **GCC Documentation** - Official compiler reference