# Functions
A function in C is a block of code designed to perform a specific task. Functions are designed to be reusable, modular components that can be called from various parts of a program. They help in organizing code, making it more readable, maintainable, and efficient. Functions typically take input parameters, perform some operations, and may return a value.

There are two types of function in C - 
1. Built in Function
2. User defined function

### 1. Built in Function: 
Build in functions are functions that are provided by the C standard library and can be used directly in your programs without the need for explicit declaration or definition. 

Example of Built in functions in C are - printf(), scanf() etc. 

### 2. User defined functions 

syntax: 

```c
return_type function_name(parameters) {
    // function body
} 
```

 - return-type: This is the data type of the value that the function returns. If a function doesn't return any value, the return type is specified as `void`. 
 - function_name: This is the name of the function, which is used to call the function from other parts of the program. 
 - parameters: These are input values passed to the function. Parameters are optional and function can have zero or more parameters. 
 - Function body: This is the block of code enclosed in curly braces `{}`. It contains the statemennt that define what the function does. 


#### Function Declaration
In C, a function declaration specifies the functions `return_type`, `name`, and `parameters` Without providing the actual implimentation. 

syntax: 
```c
return_type function_name(parameters);
```

example: 
```c
// function declaration
int add(int x, int y);
```
In the example above, `add` is the function name, `int` is the return type, and `(int x, int y)` are the parameters. 

#### Function Definition: 
The function definition provides the actual implementation of the function. It includes the function body. where the specifc code to execute is written. 

Syntax: 
```c
return_type function_name(parameters) {
    // Function body
    // code to perform the task
}
```

Example: 
```c
// Function definition
int add(int x, int y) {
    return x + y;
}
```

Putting it Together: 
```c
// Function Declaration
int add(int x, int y);

int main() {
    // Function Call
    int result = add(5, 3);
    return 0;
}

// Function Definition
int add(int x, int y) {
    return x + y;
}
```

## Parameters & Arguments 

### Parameters 
Parameters are variables declared within the parentheses of a function definition. They act as placeholders for values that the function expects to receive when it is called. 

Example: 
```c
// here `a` and `b` are parameters
void add(int a, int b) {
    printf("%d", a + b);
}
```
In this example, `a` and `b` are parameters. They represent the values that the `add` function expects when it is called.

### Arguments
Arguments are the actual values that are passed to a function when it is called. These values are assigned to the parameters of the function. 

Example: 
```c
add(3, 4);
```
In the example, `3` and `4` are arguments. They are the actual values passed to the `add` function. and they correspond to the parameters `a` and `b` in the function definition.


## Questions

1. Write a program to create three functions - 
   - `goodMrng()` function which will print - "Good Morning".
   - `goodAft()` function which will print - "Good Afternoon"
   - `goodNight()` function which will print - "Good Night".

2. Write a C Program to create a function which will take one integer parameters and increment the value by 10. 

3. Create a function which will take an integer parameters and check if the integer value is divisible by 7 or not. 

4. Create a function that takes two floating point value as parameters and display the division of the numbers. 