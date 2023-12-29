#include <stdio.h>

void main() {
    int i = 5;

    do {
        printf("Hey value of i = %d\n", i);

        i++;
    } while(i < 3);
    //      5 < 3 = false
    // no need to return anything
}