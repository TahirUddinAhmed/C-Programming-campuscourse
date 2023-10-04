# Sessional Examination 2021
## BCA-HC-1016: Introduction to C Programming

1. Choose the right options: <br>

`a`. What is required in each C Program ? <br>
    `I`. The program must have at least one function. <br>
    `II`. The program does not require any function <br>
    `III`. Input data <br>
    `IV`. Output data <br>
`Answer`: `I`. The program must have at least one function. <br>

`b`. C language is a successor to which language. <br>
    `I`. FORTRAN <br>
    `II`. D language <br>
    `III`. Basic <br>
    `IV`. B lanugage <br><br>
    `answer`: `IV`. B language <br>
`c`. High level language is a <br>
     `I`. Human readable like language <br>
     `II`. language with small program size. <br> 
     `III`. language with big program size. <br>
     `IV`. language which is difficult to understand and not human readable. <br><br>
     `answer`: `I`. Human readable like language <br><br>
`d`. C language was invented in the year - <br>
    `I`. 1999 <br>
    `II`. 1978 <br>
    `III`. 1972 <br>
    `IV`. 1990 <br><br>
  Answer: `III`. 1972 <br><br>

`e`. Find an interger constant - <br>
 `I`. 3.125 <br>
 `II`. 34 <br>
 `III`. "125"<br>
 `IV`. None of the above <br><br>
 Answer: `II`. 34 <br> <br>

2. What are the basic Data types supported in C Programming ? <br>

Answer: The basic data types supported in C programming are as follows - <br>
1. char - used to represent single character. e.g.., 'A', 'b'
2. int - used to represent interger values . e.g. 10, 143, -8, 0.
3. float - used to represent decimal numbers. 3.145, -17.99.
4. double - used to represent double-precision floating-point numbers. Which have more precision than float. e.g.., 3.14159265359


`3`. What is the purpose of printf() and scanf() in C Programming ? <br>

Answer: `printf()` and `scanf()` are two fundamental functions in C programming that are used for input and output operations. They are part of the standard input/output library `(stdio.h)` in C.<br>

`printf()`: printf() is used to display output. It is used to print data such as text, variables to the console. 
 
 e.g: 
 ```c
 int age = 25;
 printf("My age is %d\n", age);
 ```
`scanf()`: scanf() is used for input. It reads the input data from the console. 

e.g: 
```c
int age; 
printf("Enter your age: ");
scanf("%d", &age);
```
reads an interger from the user and store it in the `age` variable. 

4. What are the main difference between the compiler and the Interpreter? <br>

Answer: The main differeces between Compiler and interpreter are as follows- <br>

| Compiler | Interpreter |
| --- | --- |
| A compiler translates the entire source code of a program into machine code | An interpreter translates the source code of a program line-by-line |
| Compilers conver the source code to object code. | Interpreter do not convert the source code into object code. |
| Programming languages that use compilers include C, C++, C#, etc. | Programming languages that uses interpreter include Python, Ruby, Perl, MATLAB, etc. |

5. Write a program to swap two numbers.

Answer: 
```c
#include <stdio.h>

int main() {
    int a = 5; 
    int b = 2;

    // swap the value of a and b 
    int temp = a;
    a = b;
    b = temp;

    printf("Value of a is : %d\n", a);
    printf("Value of b is: %d\n", b);

    return 0;
}
```
Output: 
```
Value of a is 2
Value of b is 5
```

6. Write the syntax of switch statment. What should be data type of case labels of switch statement in C ? 

Answer: The syntax of switch statement is - 
```c
switch(expression) {
    case value1: 
      // code to be executed
      break;
    case value2: 
      // code to executed 
      break;
    // more case statements as needed
    default: 
      // code to be executed if none of the cases match expression
}
```

The data type of the `case` labels must match the data type of the `expression`. For example, if the `expression` is an `int` type, then the 'case' labels should also be integers. If the `expression` is character(`char`), the `case` labels should be of the same data type. 

Example of switch statement.

```c
#include <stdio.h>

int main() {
    int day = 2;
    switch (day) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        default:
            printf("Other day");
    }


    return 0;
}

```
Output: 
```
Tuesday
```



 



