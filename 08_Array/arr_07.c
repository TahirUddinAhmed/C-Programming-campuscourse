#include <stdio.h>

// call by value 
void displayArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n"); // new line
}

int findBig(int arr[], int size) {
    int big = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > big) {
            big = arr[i];
        }
    }

    return big; // 100
}

int main() {
    // biggest number 
    int a[] = {21, 7, 100, 5, 33, 11, 9};
    // how to calculate the size of an array

    int size = sizeof(a) / sizeof(a[0]);

    displayArr(a, size);

    int big = findBig(a, size);

    printf("Biggest number of the array is %d\n", big);
    
    return 0;
}

/*
0             4       6
21, 7, 0, 5, 33, 11, 9

// if else condition

let big = a[4];

for (int i = 1; i < 6; i++) {
    //   33 > 21
    if(arr[i] > big) {
        big = arr[i];
    }
}



*/