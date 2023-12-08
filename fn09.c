#include <stdio.h>

void Increment(int n) {
    int result = n + 10;

    printf("%d\n", result);
}

int main() {
    Increment(15);
    Increment(10);
    return 0;
}