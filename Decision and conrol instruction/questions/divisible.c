#include <stdio.h>

int main() {
    int num;

    printf("Please enter a number: ");
    scanf("%d", &num);

    // condition
       // 16 % 7 == 0
       // 2 == 0 - false
    if(num % 7 == 0) {
        printf("Number is divisible by 7");
    } else {
        printf("Number is not divisible by 7");
    }

    return 0;
}