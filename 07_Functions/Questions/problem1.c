// Write a C program that defines a function to find the maximum
// of two numbers. The program should take two numbers as input 
//from the user and use the function to display the maximum of the two.

// function

// a = 5, b = 12
#include <stdio.h>

void findBig(int a, int b) {
    if(a > b) {
        printf("%d is greater than %d", a, b);
    } else {
        printf("%d is not greater than %d", a, b);
    }
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    findBig(num1, num2);

    return 0;
}


