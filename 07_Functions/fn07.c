#include <stdio.h>

// 
void isEven(int a) {
    if(a % 2 == 0) {
        printf("%d is an even number\n", a);
    } else {
        printf("%d is not an even number\n", a);
    }
}

int main() {
    int num;
    scanf("%d", &num); // 9

    isEven(num); // 9
    return 0;
}


// Create a function call 'PrintNum()'
// which will print the natural number till n


// Enter number: 6
// 1 2 3 4 5 6