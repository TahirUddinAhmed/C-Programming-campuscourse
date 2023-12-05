// create a function call 'add()'
#include <stdio.h>

// declare the function
void add(int a, int b);

int main() {
    add(5, 2); // call the function
    add(15, 16);
    return 0;
}

// function definition
void add(int num1, int num2) {
   int result = num1 + num2; // result = 15 + 16

   printf("%d\n", result); // 
}