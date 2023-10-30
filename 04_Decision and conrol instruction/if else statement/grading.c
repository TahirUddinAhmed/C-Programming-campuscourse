#include <stdio.h>

int main() {
    char operator;
    float num1;
    float  num2;
    float result;

    printf("Enter an operator (+, -, *, /) ");
    scanf("%c", &operator);

    printf("Enter two numbers ");
    scanf("%f %f", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("%f", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%f", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%f", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%f", result);
        }
    } else {
        printf("Error: Invalid operator");
    }

    return 0;
}