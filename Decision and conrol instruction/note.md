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

