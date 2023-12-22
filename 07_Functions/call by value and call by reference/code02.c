#include <stdio.h>

void increment(int *a) {
    *a += 1; // 5++  = 6
    printf("Value of a inside fn = %d\n", *a);
} 

int main() {
    int a = 5;
    // memory
    // a = 6

    increment(&a);
    
    printf("Value of a = %d\n", a);

    return 0;
}

// output 
// sarat
/*
Value of a inside fn = 1
Value of a = 1

*/
// tralukya
/*
Value of a inside fn = 6
Value of a = 7

*/
// maminul
/*
Value of a inside fn = 5
Value of a = 6

*/