/*
Write a C program that calculates the remainder of two integers.(Hint: use modulus operator )
*/

/*
Write a C Program that calculates the average of three numbers.

5    3   8

5 + 3 + 8  = 16

16 / 3 = 5


output the result 

5.333


*/












#include <stdio.h>

int main() {
    int a = 12;
    int b = 9;

    int result = a % b;

    // output the result 
    printf("Remainder is %d\n", result);

    return 0;
}