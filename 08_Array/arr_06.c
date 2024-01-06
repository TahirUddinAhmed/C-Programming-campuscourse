// write a program to input marks of 5 students and print the numbers.

// using array

// int marks[5];

// input array element 

// print array element

// write a program to find the even numbers
// of the following array and print
// arr[] = {2, 3, 6, 7, 8, 11, 13, 15, 16, 21, 22, 28};

// 2, 4, 6, 8 .. 
// number should be divisble by 2 = even number



#include <stdio.h>

int main() {
    int marks[5];

    // scanf("%d", &marks[0]);
    // scanf("%d", &marks[1]);
    // scanf("%d", &marks[2]);
    // scanf("%d", &marks[3]);
    // scanf("%d", &marks[4]);

    for(int i = 0; i < 5; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &marks[i]);
    }

    // print 
    for(int i = 0; i < 5; i++) {
        printf("%d\n", marks[i]);
    }

    return 0;
}
