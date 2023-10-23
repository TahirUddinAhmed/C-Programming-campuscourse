# Decision and Control Instruction 
In the world of programming and computer science, decision control instructions are an integral part of the logic that enables a program to make decisions, execute specific code blocks, and control the flow of the program based on certain conditions. 

## Conditional Statements
These are the building blocks of decision control. Conditional statements allow us to execute different code based on whether a condition is true or false. 

#### Types of conditional statements in c are - 
  1. if-else statement 
  2. switch statement  

In today's lecture, we'll explore the concept of `if-else` statement, understand its syntax and how they work, and learn how to implement them effectively in C. 

### syntax
```c
if (condition) {
    // code to execute if the condition is true
}
```
Let's understand the "if" statement 
  1. `if`: "if" is a keyword that signals the start of a condition. 
  2. `(condition)` :  A boolean expression enclosed in parentheses. Which evaluates either true or false. It determine whether the code inside "if" statement's block should be executed or not. 
  3. `{code block}`: A block of code enclosed in curly braces to be executed if the condition is true. 

#### example 
```c
#include <stdio.h>

int main() {
    int age = 25;

    if (age > 18) {
        printf("You are an adult\n");
    }

    return 0;
}
```

### The else statement 
`else` statement specifies what code should be executed if the condition in the `if` statement is false. 

#### syntax
```c
if (condition) {
    // Code to execute if the condition is true
} else {
    // code to execute if the condition is false. 
}
```

#### example 
```c
#include <stdio.h>

int main() {
    int age = 9;

    if (age > 18) {
        printf("You are an adult\n");
    } else {
        printf("You are a child\n");
    }

    return 0;
}
```

## Logical Operator
Logical Operators help in making decisions and controlling the flow of your program. They are special symbols used to perform logical or boolean operations on values or conditions. 

There are three main logical operators are in C: 
   1. `AND (&&)`: returns true if both conditions are true. 
   2. `OR (||)`: Returns true if at least one condition is true.
   3. `NOT (!)`: Flips the truth value of a condition. 

### 1. Logical AND Operator (&&)
   - Syntax: `expression1 && expression2`
   - Returns true(1) if both `expression1` and `expression2` are true.
   - example: 
   ```c
    if((10 == 10) && (20 == 10)) {
        // code to be executed if both the condition true.
    }
   ```
Let's see the truth table of AND (&&)

| expression1 | expression2 | expression1 && expression2  |
| --- | --- | --- |
| false | false | false | 
| false | true | false | 
| true | false | false | 
| true | true | true |

code example: 
```c
#include <stdio.h>

int main() {
    int a = 20, b = 30;

    if(a > 10 && b > 10) {
        printf("Both numbers are greater than 10\n");
    }

    return 0;
}

```
Ouput
```
Both numbers are greater than 10
```

## Logical OR operator (||):
 - syntax: `expression1 || expression2`
 - Returns true(1) if either expression1 or expresion2  is true. 
 - Example : (2 == 0 || 2 > 1) - return true because here (2 == 0) return `false` or (2 > 1) return `true`

Truth table of OR (||)
| expression1 | expression2 | expression1 OR expression2 | 
| --- | --- | --- |
| false | false | false | 
| false | true | true | 
| true | false | true | 
| true | true | true | 

code example : 
```c
#include <stdio.h>

int main() {
    int x = 5, y = 12;

    if(x > 10 || y < 20) {
        printf("At least one condition is true\n");
    }
    return 0;
}
```
output: 
```
At least one condition is true
```
In the above program, since the condition `y < 20` is true the logical operator (`||`) considers the entire condition to be true. 

## Logical NOT operator (!)
  - Syntax: `!expression`
  - Reverses the logical value of the expression. 
  - Returns true(1) if the expression is false(0) and vice versa. 

```c
#include <stdio.h>

int main() {
    int isSunny = 0; // 0 represent false 
    if(!isSunny) {
        printf("It's not sunny today.\n");
    }
    return 0;
}
```
In this example. `isSunny` is initially set to 0 (false). using `!isSunny` results in a true condition. As a result. the program prints "Its sunny today."

Truth table of NOT operator (!)

| expression | result |
| --- | --- |
| false | true | 
| true | false | 







## Question 
1. Write a C program that takes an integer as input and prints whether it's an even or odd number. 

2. Create a C program that takes a user's age as input and then checks if they are eligible to vote (18 years or older). If eligible, print "You can vote", otherwise, print "You cannot vote"

3. What is the purpose of "if-else" statements in C programming ? 
    - `A`. To delcare variable
    - `B`. To control program flow based on conditions. 
    - `C`. To define functions
    - `D`. To print output to the screen 

4. What is the purpose of using curly braces `{}` in an "if-else" statement? 
    - `A`. To create a list of conditions. 
    - `B`. To improve code performance 
    - `C`. To define variable names
    - `D`. To group statements together as a block 

5. Write a C program that takes two integers as input from the user to determine whether the numbers are equal or not. 

6. Create a program that checks if a year is a leap year or not using an "if-else" statement, following the leap year rules (divisible by 4).

7. What Will the following code Output ?
```c
int num = 15;
if (num > 10) {
    printf("A\n");
} else {
    printf("B\n");
}
```
   - `1`. A
   - `2`. B
   - `3`. A and B
   - `4`. Neither A nor B


