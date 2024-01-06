#include <stdio.h>

int main() {
    
    int rolls[5] = {1, 2, 33, 21, 7};

    // don't need to give the size of the array
    // compiler will automatically calculate the size
    // int rolls[] = {1, 3, 4, 5, 6, 7, 8, 9, 10};
    // rolls[9]

    // print all the elements of this array 
    // printf("%d\n", rolls[0]);
    // printf("%d\n", rolls[1]);
    // printf("%d\n", rolls[2]);
    // printf("%d\n", rolls[3]);
    // printf("%d\n", rolls[4]);

    // loop 
    // end: size of the loop
    for(int i = 0; i < 5; i++) {
        printf("%d\n", rolls[i]);
    }








    

    return 0;
}