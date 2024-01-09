/*
multiple table 5
int table = 5;
for(int i = 1; i <= 10; i++) {
    printf("number X 1 = result");
    printf("%d  X %d = %d\n", table, i, table*i);
}

for(int i = 1; i <= 12; i++) {

    for(int j = 1; j <= 10; j++) {
        printf("%d  X %d = %d\n", table, i, table*i);
    }
}
*/

#include <stdio.h>

int main()
{
    // int table = 5;

    // for(int i = 1; i <= 10; i++) {
    //     printf("%d X %d = %d\n", table, i, table*i);
    // }

    for (int i = 1; i <= 15; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d  X %d = %d\n", i, j, i * j);
        }
        printf("\n"); // new line
    }
    return 0;
}