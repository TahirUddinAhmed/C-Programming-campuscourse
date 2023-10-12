
// Write a program to take input an integer input from the user and 
// print the value 

#include <stdio.h>

int main() {
    int pincode;

    printf("Please enter your pincode: ");
    scanf("%d", &pincode);

    printf("Your pincode is %d\n", pincode);

    return 0;
}