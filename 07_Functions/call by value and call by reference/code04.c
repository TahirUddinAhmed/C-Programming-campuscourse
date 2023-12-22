#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a; // temp = value 'a'
    *a = *b; // a = value 'b'
    *b = temp; // b = value 'temp'
}

int main() {
    int a = 3, b = 12;

    swap(&a, &b);

    printf("value of a = %d\n", a);
    printf("value of b = %d\n", b);


    return 0;
}