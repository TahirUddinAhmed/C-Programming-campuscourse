// write a program to swap two numbers 

// create a function that will take two parameters 
// and swap the value 
// a = 5;    a = 7
// b = 7;    b = 5

#include <stdio.h>

void swap(int a, int b) {
    int temp;

    temp = a; // temp = 5
    a = b;   // a = 7
    b = temp;  // b = 5


    printf("fn value of a = %d\n", a);
    printf("fn value of b = %d\n", b);
}

int main() {
    int a = 9, b = 46;
    
    swap(a, b);

    printf("a value = %d\n", a);
    printf("b value = %d\n", b);

    return 0;
}
