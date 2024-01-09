#include <stdio.h>

int main() {
    // loop A - start-1  end - 5
    // Loop B - start-1  end - 4

    // i = 1
    // print = 1
    // k = 1
    // print = 1 2 3 4
    // k = 5
    // i = 2
    // print = 2
    // k = 5
    // print = 1 2 3 4
    // i = 3

    // i =1 loop 1 to 4
    // i = 2 loop 1 to 4

    // loop 
    // for(int i = 1; i < 6; i++) {
    //     printf("%d\n", i);
    //     //             5 < 5
    //     for(int k = 1; k < 8; k++) {
    //         printf("%d", k);
    //     }
    //     printf("\n");
    // }

    for(int i = 1; i <= 4; i++) {
        printf("value of i is %d\n", i);
        for(int j = 1; j <= 2; j++) {
           printf("\tvalue of j is %d\n", j);
        }
    }


    return 0;
}

// multiplication table 