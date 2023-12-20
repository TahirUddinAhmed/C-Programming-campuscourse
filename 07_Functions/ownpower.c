#include <stdio.h>

// 5 to the power 3
// 5 * 5 * 5 * 5 * 5 * 5 * 5
// number = 4, power = 3

float OwnPow(int number, int power) {
    float result = 1;
    for(int i = 1; i <= power; i++) {
        result *= number;
        // result = result * number;
        //   4     =  1 * 4
        //         = 4 * 4 = 16
                     
    }

    return result;
}

int main() {
    int n, p;
    scanf("%d %d", &n, &p);

    float res = OwnPow(n, p);
    printf("%f\n", res);
    return 0;
}