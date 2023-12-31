#include <stdio.h>

void show_array(int array[], int size) {
    for(int i; i < size; i++) {
        printf("%d\n", array[i]);
    }
}

int main() {
    int rollNumbers[3];

    // initialize
    rollNumbers[0] = 12;
    rollNumbers[1] = 3;
    rollNumbers[2] = 5;


    // printf("%d\n", rollNumbers[2]);
    show_array(rollNumbers, 3);

    return 0;
}