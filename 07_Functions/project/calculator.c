#include <stdio.h>

void addition() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", a + b);
}

void substraction() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", a - b);
}

void mul() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    printf("Result = %d\n", a * b);
}

void division() {
    float a, b;
    printf("Enter two number: ");
    scanf("%f %f", &a, &b);

    // 5 / 2 = 2
    // appro = 2.5

    printf("Result = %.3f\n", a / b);
}


int main() {
    int choose;

    // project Name 
    printf("CampusCourse Calculator:)\n");

    do {
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Please choose an option: ");
        scanf("%d", &choose);

        switch(choose) {
            case 1: 
               printf("Perform addition\n");
               addition();
               break;
            case 2: 
               printf("Perform substraction\n");
               substraction();
               break;
            case 3: 
               printf("Perform mulplication\n");
               mul();
               break;
            case 4: 
               printf("Division\n");
               division();
               break;
            default: 
               printf("Please enter a valid option\n");
               break;
        }



    } while(choose != 5);

    ///   1 : condition : 1 is not equal to 5 = true
    // 5: 5 is not equal to 5= false
    // when the loop will terminate


    return 0;
}