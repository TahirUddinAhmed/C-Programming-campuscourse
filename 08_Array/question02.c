//  Find the smallest element in an array use function

// arr[] = {32, 5, 9, 12, 14, 7}

// let small = arr[0];
// small = 5

// for (1 to size-1) {
  //          5 < 12
//    if(arr[i] < small)
//         small = arr[i]
//}

#include <stdio.h>

int findSmall(int arr[], int size) {
    // smallest element 
    int small = arr[0];

    // loop 
    for(int i = 1; i < size; i++) {
        if(arr[i] < small) {
            small = arr[i];
        }
    }

    return small;
}

int main() {
    // size - 1 = 6
    //           0   1  2   3   4  5  6
    int arr[] = {32, 5, 0, 12, 14, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int small = findSmall(arr, size);

    printf("The smallest element in this array is %d\n", small);


    // create a function named "findSmall"

    return 0;
}

// int arr[10];
// input - 10 element 
// total 
// print 

10 student 
array - 10
collects the marks - input 
total marks 
print -> total mark 

// int marks[10];

// collect - input  

// marks[10] = {23, 5, 349, 2234,, 234, 34, 34};


// add 

//



