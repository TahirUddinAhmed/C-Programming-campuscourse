// 5! = 5 * 4 * 3 * 2 * 1
// 4! = 4 * 3 * 2 * 1

// 7 = 1 * 2 * 3 * 4 * 5 * 6 * 7
#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for(int i = 1; i <= number; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}