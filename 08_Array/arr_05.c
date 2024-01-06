// how to find the size of an array
// int rolls[] = {1, 3, 4, 5, 6, 7, 8, 9, 10};

// sizeof();

// int - 4 bytes

// int arr[5];

// for this array 'arr' - 4 * 5 = 20 bytes

// size of an array
// sizeof(array) / sizeof(datatype) or(sizeof(one_element))

// 20 / 4 = 5


// double arr[4];
// array memeory size = 8 * 4 = 32

// size of the array = 32 / 8 = 4

//int rolls[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 22, 3, 1, 2, 3, 4};

// size = sizeof(rolls) / sizeof(int);




#include <stdio.h>

int main() {
    int rolls[] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 22, 3, 1, 2, 3, 4, 12};

    int size = sizeof(rolls) / sizeof(int);

    printf("%d\n", size);

    return 0;
}