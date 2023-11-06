// 5! = 5 * 4 * 3 * 2 * 1
// 4! = 4 * 3 * 2 * 1
#include <stdio.h>

int main() {
    int num;
    int power;
    int result = 1;
    scanf("%d", &num);
    scanf("%d", &power);


    for(int i = 1; i <= power; i++) {
       result *= num;
    }
    printf("%d", result);
    return 0;
}