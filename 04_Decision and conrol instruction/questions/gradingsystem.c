// A(80 - 100)
// B(60 - 79)
// C(30 - 59)
// Fail(0 - 29)

#include <stdio.h>

int main() {
    int mark;

    printf("Hey, enter your total mark: ");
    scanf("%d", &mark);

    // condition 
       // 77 >= 80
    if(mark >= 80 && mark < 100) {
        printf("Your grade is A");
    } else if(mark >= 60 && mark < 100) { // 77 >= 60 - true
        printf("B");
    } else if(mark >= 30 && mark < 100) { // 15 >= 30 -false
        printf("C");
    } else if(mark >= 0 && mark < 100) {
        printf("You are fail");
    } else {
        printf("Please enter a valid mark");
    }

    return 0;
}