// int arr[7] = {2, 4, 11, 0, 21, 44, 9};
// find the largest number is this array

// {2, 4, 11, 0, 21, 44, 9}
// condition - if else 
// let big = arr[0];  = big = 44
// we need to use loop
// start - 1 till 6
// check   if(arr[i] > big) {
//               big = arr[i];
//         }

// big = 44


#include <stdio.h>

int main() {
    int arr[7] = {2, 4, 11, 100, 21, 44, 9};
    // let bigest number 
    int big = arr[0];
    // big = 2
    // big = 4
    // i = 2
    // big = 100
    // i = 7

          //       7 > 7
    for(int i = 1; i < 7; i++) {
        // arr[6] = 9 > 100
        if(arr[i] > big) {
            // big = arr[i];
            big = arr[i];
        }
    }

    printf("Biggest number is this array is %d\n", big);


    return 0;
}

