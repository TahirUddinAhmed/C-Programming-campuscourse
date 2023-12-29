# Array 
In C programming, an array is a collection of elements of the same data type that are sotred in contiguous memory locations. Each elements in an array is identified by an index or a subscript, starting from zero. Arrays provide a convenient way to store and access a group of values of the same type. 

## Array Declaration 
In C, we have to declare the array like any other variable before using it. We can declare an array by specifying its name, the type of its elements, and the size of its dimensions. When we declare an array in C, the compiler allocates the memory block of the specified size of the array name. 

Syntax of array declaration: 
```
 data_type array_name [size];
```

## Initialization
Array initialization in C can be done at the time fo declaration or later during the program execution. 

 1. Array Initialization with declaration: you can initialize an array at the time of declaration by providing a list of values enclosed in curly braces `{}`.
  Example: 
 ```c
  int scores[4] = {81, 67, 36, 99};
 ```
 In this example, an integer array named `scores` is declared with a size of 4 and is initialized with the values 81, 67, 36, 99.

 If the size of the array is omitted, the compiler will automatically determine the size based on the number of elements provided: 
 Example
  ```c
   int numbers[] = {1, 2, 3, 4, 5};
   // compiler infers the size as 5.
  ```

## Accessing Elements
Elements in an array are identified by their indices with start from zero.

Syntax: 
```c
array_name[index]
```

One thing to note is that the indexing in the array always starts with 0, the first element is at index 0 and the last element is at `N - 1` where the `N` is the number of elements in the array.
