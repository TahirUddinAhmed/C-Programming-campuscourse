// pointer arithmetic (+, -, *, /)
// pointer stores address of another variable
// a = 4, b = 5; c = a + b;
#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr = &a[0];

    ptr = ptr + 5;


    printf("new value is %d\n", *ptr);

    // how to pass an array to a function

    // using call by value 

    // call by reference


    return 0;
}
