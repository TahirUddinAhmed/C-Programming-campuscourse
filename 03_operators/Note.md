# Operators in c

Operators in C are symbols used to perform various operations on data. They are a fundamental part of the C programming language and are essential for performing task like arithmetic calculations, comparisions, and logical operations. 

In short, operators are used to perform operations on variables and values. 

e.g
```c
int sum = 12 + 123; 
```

There are several types of operators in C - 
  - Arithmetic Operators
  - Assignment Operators
  - Relational Operators
  - Logical Operators 
  - Increment / Decrement Operators 

In this lecture we are going to discuss about the `arithmetic` operators.

## Arithmetic Operators 
Arithmetic Operatos are used to perform mathematical calculations 

| Operator | Name | Example | Result | 
| --- | --- | --- | --- |
| + | Addition | 5 + 2 | 7 | 
| - | Substraction | 5 - 2 | 3 |
| * | Multiplication | 5 * 2 | 10 | 
| / | Division | 5 / 2 | 2 | 
| % | Modulus | 5 % 2 | 1 | 


e.g 
```c
#include <stdio.h>

int main() {
    int a = 12 + 10;  // 22
    int b = a - 7; // 22 - 7 = 15
    int c = a * b; // 22 * 15 = 330


    printf("Value of a : %d\n", a);
    printf("Value of b : %d\n", b);
    printf("Value of c : %d\n", c);
    return 0;
}
```
Output: 
```
Value of a : 22
Value of b : 15
Value of c : 330
```



### Operator Precedence
Operators have a specific order of evaluation, known as operator precedence, It's important to understand this order to avoid unexpecter results. 

```c
int a = (2 + 3) * 2

// What will be value of a now
```

### Operator precendence Hierarchy 
| Priority | Operator |
| --- | --- |
| 1st | parentheses `()` |
| 2nd | * / % |
| 3rd | + - |
| 4th | assignment operator `=` | 

```
a = 2 * 3/4 + 4/4 + 8 - 2

a = 6/4 + 4/4 + 8 - 2     => operation: *
a = 1 + 4/4 + 8 - 2       => operation: /
a = 1 + 1 + 8 - 2         => operation: /
a = 2 + 8 - 2             => operation: +
a = 10 - 2                => operation: +
a = 8                     => operation: -
```


## Questions 

1. Write a C program that calculates the remainder of two integers.(Hint: use modulus operator )

2. Write a C program that calculates the perimeter of a rectangle given its length and width. 

```
 Formula: 
   perimeter of rectangle = 2 * (l + b)
```

3. What will be the value of the variable `c`- 
```c
  int a = 7;
  int b = 4;
  int c = a % b;
```

  `a`: 0 <br>
  `b`: 1 <br>
  `c`: 3 <br>
  `d`: 12 <br>




