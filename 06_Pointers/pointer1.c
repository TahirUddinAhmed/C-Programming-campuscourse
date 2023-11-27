#include <stdio.h>

int main() {
    int age = 50;
    int *ptr = &age; 
    // reference operator OR address-of Operator

    printf("ptr = %d\n", ptr);
    printf("Address of age = %d\n", &age);
    printf("Value pointed by the ptr = %d\n", *ptr);
    return 0;
}


