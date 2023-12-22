#include <stdio.h>

// call by reference 
void fn(int *n) {
    *n = 50;
}

// call by value 
void fn1(int a) {
    a = 5000;
    
}

int main() {
    int n = 5;
    int a = 10;

    // function call
    fn(&n);
    fn1(a);
    // address of variable n

    printf("value of n = %d\n", n);
    printf("value of a = %d\n", a);

    return 0;
}