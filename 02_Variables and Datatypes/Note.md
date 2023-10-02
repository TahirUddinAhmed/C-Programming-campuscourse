# Variables & Data types
 A Variable is a container which stores a value. In kitchen, We have containers Storing Rice, Dal, Sugar etc. Similar to that a variable in C stores values 
 e.g: 
```c
mark = 78; 
// here mark is a variable which stores the value 78

percentage = 64.5; 
// here percentage is a variable which stores the value 64.5

grade = 'A';
// here grade is a variable which stores the value A
```

So, here you have noticed that every variable stores different values 
 - <b><i>mark</i></b> store whole number 
 - <b><i>percentage</i></b> store floating point number 
 - <b><i>grade</i></b> store character 

we have to define which variable is going to store what value using data type 
 - <b><i>int</i></b> - storing whole number, i.e 12, -19
 - <b><i>float</i></b> - storing floating numbers, i.e  13.14, -45.99
 - <b><i>char</i></b> - storing single character, such as 'a', 'z' 

 ## Declaring (Creating) Variables 
 To create a variable, specify the <b>type</b> and assign it a <b>Value</b>

Syntax: 
```
type variableName = value;
```

Note: Type is one of C type(such as int), and variableName is the name of the variable ( such as roll_no ). The equal sign is used to assign a value to the variable. 

So, to create a variable that should store a number 

```c
int roll_num = 15;
```

You can also declare a variable without assigning the value, and assign the value later. 

```c
// Declare a variable
int a;

// Assign a value to the variable 
a = 56;
```

## Output Variables 
We can output a variable using the printf() function. 

```c
// Declare a variable
int a = 15;

printf(a);
// nothing happens
```

To output variables in C, You must get familier with something called "Formate specifier"

### Formate Specifier 
Formate specifier are used together with the printf() function to tell the compiler what type of data the variable storing. 

A formate specifier starts with a percentage sign %, followed by a character

  - %d - for printing interget values 
  - %f - for printing floating values
  - %c - for printing character values 

syntax: 
```c
printf("<formate specifier>", variable_name);
```
Example: 
```c
#include <stdio.h>

int main() {
    int roll = 34;
    
    printf("%d", roll);
    return 0;
}
```

### Assignment 
 1. Write a C program to create a variable name called "pincode" which will store your village pincode, and also print the value using printf(). 
 2. What will be the output of the following program: 
  ```c
  #include <stdio.h>

  int main() {
    printf("Hello everyone\n");

    return 0;

    printf("How're you all\n");
  }
  ```
   1. Hello Everyone\n
   
   2. Hello Everyone<br>
      How're you all
   3. Hello Everyone
   4. None of the above






  


