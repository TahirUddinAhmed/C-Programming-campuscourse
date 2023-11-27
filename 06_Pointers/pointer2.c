// write a program which will create a variable 
// called rollNumber = 14, 
// add a pointer the variable rollNumber,

// print -> the value of rollNumber, - using the actual variable
// print -> the value of rollNumber, - using the pointer
// print -> The addres of rollNumber - using the pointer

#include <stdio.h>

int main() {
    int rollNumber = 14;
    int *rollPtr = &rollNumber;

    printf("The value of roll = %d\n", rollNumber);
    printf("The value of roll is = %d\n", *rollPtr);
    printf("Address of roll Number = %d\n", rollPtr);
    return 0;
}