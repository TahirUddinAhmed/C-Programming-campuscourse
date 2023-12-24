#include <stdio.h>

int main() {
    int number = 230;

    int *ptr = &number;

    printf("%d\n", ptr);
    printf("%d\n", *ptr);

    return 0;
}