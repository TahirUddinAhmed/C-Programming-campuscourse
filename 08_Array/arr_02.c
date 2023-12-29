#include <stdio.h>

int main() {
    // declaration of array
    int nums[5] = {1, 2, 3, 4, 5};
    // {1, 2, 3, 8, 5}

    // if we want to access the 3th element 
    // index: index are start from 0. 
    // last index N-1 = 4

    // int arr[234];

    // arr[233]; // 234-1

    // update element in an array
    nums[3] = 8;


    
    printf("%d\n", nums[3]);
    // printf("%d\n", nums[4]);
    return 0;
}

// Write a program to store 3 students marks.
