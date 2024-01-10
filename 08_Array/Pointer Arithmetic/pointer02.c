#include <stdio.h>
/*
let say, we have a pointer ptr which points to an 
array, initially, ptr contains the address of 
3rd element of the array, example: ptr = &a[2].

what will be the index of the array after this 
operation

ptr = ptr + 3.

//  0,   1,  2  3   4    5
a = 21, 22, 23, 24, 35, 77;
*/ 

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = &arr[0];
    ptr = ptr + 4;

    float arr2[4] = {1.23, 4.37, 22.7, 97.98};
    float *ptr2 = &arr2[2];
    ptr2 -= 2;

    printf("%.2f\n", *ptr2);

    return 0;
}