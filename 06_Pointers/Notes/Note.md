# Pointers 
In C Programming, a pointer is a variable that stores the memory address of another variable. This allows you to indirectly access the value of a variable by referring to its memory address. Pointers are a poewrful feature in C and are widely used for various pusposes, such as dymanic memory allocation, accessing array elements, and facilitating functions arguments. 

- Note: We can get the memory address fo a variable with the referece operator `&`.

Example: 
```c
int age = 19; // an int variable

printf("%d", age); // print -> value of age
printf("%p", &age); // print -> memory address of age 

```

A pointer is a variable that stores the memory address of another variables as its value. 


General Syntax for declaring pointer variable: 
To declare a pointer in C, you use the `*` (asterisk) symbol.
```
datatype *pointer_name;
```

 - `data_type` is the type of the variabel that the pointer will point to. 
 - `pointer_name` is the name you give to the pointer. 

 example: 
 ```c
 int *ptr;
 ```
 this mean `*ptr` points to integer value. 

 Another example: 
 ```c
 char *ptr;
 ```
 this mean `*ptr` points to character value. 


 ### Initialization of pointers: 
 After declaring a pointer, you need to initialize it by assigning the address oof a variable of the same type. The address-of operator (`&`) is used to get the memory address of a variable. 

 ```c
 int x = 10; 
 int *ptr = &x; 
 // initialize a pointer with the address of x
 ```
In this example. `ptr` is assigned the memory address of the variable `x`, so it `points to` the location in memory where `x` is stored. 


```c
#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
     
    printf("Address of variable x = %p\n", &x);
    printf("value of ptr = %p\n", ptr);
    printf("Value of x = %d\n", x);
    printf("Value pointed to by ptr = %d\n", *ptr);
    return 0;
}
```

We can also change the value of the object pointed by the pointer. 

```c

int x = 10;
int *ptr = &x;

*ptr = 4;

// now the value of x = 4

```

Note: the `*` in pointer is called value of operator
