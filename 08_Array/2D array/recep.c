#include <stdio.h>
// write a program to initialize a 2d array
// 3 * 4 
// and print any one element from that array
int main() {
    int a[2][3] = {
    //   0  1  2
        {2, 4, 6},  // 0
        {8, 10, 12} // 1
    };
    // for loop - nested for loop
    // row 
    // i = 0, j = 3
    // i = 1, j = 3
    // i = 2
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n"); // new line
    }
    
    return 0;
}