#include <stdio.h>

int main() {
    int age = 12;

    // increment 
    // printf("%d\n", age++); // print - 12   age = 13
    // printf("%d\n", ++age); // print - 14   age = 14
    // printf("%d\n", age);  // print -  14   age = 14

    printf("%d\n", --age);  // print-11    age = 11
    printf("%d\n", age++); //  print - 12  age = 12
    printf("%d\n", age);  // print - 12    age = 12

    return 0;
}