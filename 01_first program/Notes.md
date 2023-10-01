# Introduction to C 

 - Understand what is programming language 
 - Understand the need of compilers 
 - Intro. of C programming 
 - Basic structure of a c program 
 - Write our first c program 
 - new line operator 

### Questions 
 1. Write a C program to print - "Hello, I am @yourname" 
 2. What is the extension of a c program file? 
 3. Write a C Program to print 
  <pre>
  Hi, Welcome to CampusCourse
  I am @yourname
  My age is @age
  Village name : @Village name
  Thank you
  </pre>

 ### What is programming language ?
  "Programming is a way of telling a computer what to do by using a special language that the computer can understand"

  Computer can only understand binary code (0 and 1).

  C programming is created by <b>Dennis Ritchi</b>

  Compilers job is to convert our source code into machine understandable code which is 0s ans 1s 

  Every C statement ends with a semicolon

```c
#include <stdio.h>

int main() {
    printf("Hello world!");
    return 0;
}
```

Explain: 

1. #include <stdio.h> is a header file library that work with input and output functions, such as printf() and scanf().

2. A blank line. C ignores white space. But we use it to make the core more readable. 

3. Another thing that always appear in a C program, is main() . This is called function. Any code inside its curly brackets {} will be executed. 

4. printf() is a function used to output/print text to the screen. 

Note: Every C statement ends with a semicolon ;

5. return 0 means end the main() function. 

