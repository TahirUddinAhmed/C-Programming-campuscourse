// WAP to print the even numbers from 1 to 20
// expected output
// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20
#include <stdio.h>

int main() {

    // i = 4

    // 1st way
    // for(int i = 2; i <= 20; i+=2) {
    //     printf("%d\n", i);
    // }

    // i = 4

    // 2nd way
    for(int i = 1; i <= 20; i+=1) {
        if(i % 2 == 0) {  
            printf("%d\n", i);
        }
    }


    return 0;
}
// output : 2 4


// 1 % 2 == 0

// 1 == 0 false