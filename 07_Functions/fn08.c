#include <stdio.h>

// 
void PrintNum(int n) {
   for(int i = 1; i <= n; i++) {
    printf("%d\t", i);
   }
}

int main() {
    int num;
    scanf("%d", &num); // 9

    PrintNum(num);

    return 0;
}