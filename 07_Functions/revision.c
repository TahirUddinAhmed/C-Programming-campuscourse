#include <stdio.h>

// return_type fn_name(parameters) {

//}

// definition
void greetings() {
    printf("Hello, How are you?\n");
}

void substract(int num1, int num2) {
    printf("%d\n", num1 - num2); // 8 - 5 = 3

}

int main() {
    // data_type variable_name = value;

    greetings(); // call the function

    substract(18, 5);
    substract(56, 9);
    return 0;
}