#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if(number > 0) {
        printf("Number is positive\n");
    } else if(number < 0) {
        printf("Number is negative\n");
    } else {
       printf("You entered zero (0)"); 
    }

    return 0;
}