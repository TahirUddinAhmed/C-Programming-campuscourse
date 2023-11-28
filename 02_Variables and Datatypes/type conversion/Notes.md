# Type conversion in c 
Type conversion in C refers to the process of converting a value from one data type to another. 

C is a statically-typed language, which means that the data type of a variable must be declared before it is used. However, ther are situations where it is neccessary to convert a value from one type to another, and C provides mechanisms for doing so. 

There are two types of type conversion in C - 

 1. Implicit type conversion (Automatic Type conversion)
  - This type  of conversion is performed by the compiler automatically during the compilation process. 

  example : 
  ```c
  int num = 10;
  float fnum = num; 
  // Implicit conversion from int to float
  ```
  Here an integer value is assigned to a float type, hence compiler converts the `int` value to `float` type automatically. 

  ```c
  printf("%d\n", fnum); // 10.000000
  ```

  2. Explicit  Type conversion (type casting): 
  - This type of conversion is done explicitly by the programmer using casting operators. 
  - It involves the use of casting operators like `(type)` or `type(value)`.
  - Explicit conversion is used when there is a possibility of loss of data, and the programmer wants to ensure that the conversion is done knowingly. 

  Example: 
  ```c
  float fnum = 12.7;
  int num = (int)fnum; 
  // Explicit conversion from float to int 
  ```

  another example: 
  ```c
  int num1 = 5;
  int num2 = 2;

  float divide = (float) num1 / num2;

  printf("%d\n", divide);
  ```


## Question

1. What will be the output of the following program - 
```c
#include <stdio.h>

int main() {
    int x = 4;
    float y = 7.3;

    printf("%f\n", x + y);
    return 0;
}
```
  `a)` 11.300000
  `b)` 11
  `c)` Compilation Error
  `d)` None of these

2. What will be the output of the following program - 
```c
#include <stdio.h>

int main() {
    float x = 5 / 2;

    printf("%f\n", x);
    return 0;
}
```
   `a)` 2
   `b)` 2.500000
   `c)` 2.000000
   `d)` 2.5