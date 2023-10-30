#include <stdio.h>

int main() {
    char result;

    printf("Do You agree?(y/n): ");
    scanf("%c", &result);


    if(result == 'y' || result == 'Y') {
        printf("I am lucky to have you in my life");
    } else if (result == 'n' || result == 'N') {
        printf("It's alright!");
    } else {
        printf("Please enter y or n.");
    }

    return 0;
}

// AND OR
// &&  ||

// y - yes
// n - no

//  AND OR 