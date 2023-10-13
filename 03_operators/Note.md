# Operators in c

Operators in C are symbols used to perform various operations on data. They are a fundamental part of the C programming language and are essential for performing task like arithmetic calculations, comparisions, and logical operations. 

In short, operators are used to perform operations on variables and values. 

e.g
```c
int sum = 12 + 123; 
```

There are several types of operators in C - 
  - Arithmetic Operators (+, -, *, /, %)
  - Assignment Operators - ( = , +=, -=, *= , %= );
  - Relational Operators (==, !=, >, <, >=, <=)
  - Logical Operators (&&, !!, !) 
  - Increment / Decrement Operators (++, --)

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

## Assigment Operator

  Assignment Operators are used to assign Values to variables. 

 for example 
 ```c
  int a; // Declaring a variable named "a"
  a = 5; // Assigning the value 5 to the variable a.
 ``` 
Here assignment operator (=) to assign the value 5 to a variable called a. 

 The addition assignment operator (`+=`) adds a value to a variable. 

 ```c
   int age = 10;
   age += 5;
 ```

 A list of all assignment operators: 

 | Operator | Example | Same As |
 | --- | --- | --- |
 | = | a = 10 | a = 10 |
 | += | a += 2 | a = a + 2 |
 | -= | a -= 2 | a = a - 2 | 
 | *= | a *= 2 | a = a * 2 | 
 | /= | a /= 2 | a = a / 2 |  
 | %= | a %= 2 | a = a % 2 |  

```c
#include <stdio.h>

int main() {
  int a = 10;
  a *= 5;

  printf("a = %d\n", a);
  return 0;
}
```
Output: 
```
 a = 50
```

## Relational Operators (Comparision Operator)
  Relational Operators in C are used to compare values and determie the relationship between them. These operators return a boolean value (`true` or `false`).

  The return value of a relational operator is either `1` or `0`. Which true(`1`) or false(`0`).

  e.g
  ```c
   int x = 10;
   int y = 7;


   printf("%d\n", x > y); // return 1 (true) because 10 is greater than 7

   return 0;
  ```

  Relational Operators 
  | Operator | Name | Example | Result |
  | --- | --- | --- | --- |
  | == | Equal to | 5 == 2 | 0 (false) |
  | != | Not equal | 5 != 2 | 1 (true) |
  | > | Greater than | 5 > 2 | 1 (true) |
  | < | Less than | 5 < 2 | 0 (false) |
  | >= | Greater than or equal to | 5 >= 2 | 1 (true) |
  | <= | Less than or equal to | 5 <= 2 | 0 (false) |

## SizeOf Operator 
The memory size (in bytes) of data types or a variable can be found with the `sizeof` operator. 






 





