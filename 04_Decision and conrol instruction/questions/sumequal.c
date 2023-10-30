#include <stdio.h>

int main() {
    int a;
    int b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    // addition = 100 
    //    print - "addition of both the number is 100"
    // else 
    //  print - "not 100"

    if(a + b == 100) {
        printf("addition of both the number is 100");
    } else {
        printf("Not 100");
    }

    return 0;
}