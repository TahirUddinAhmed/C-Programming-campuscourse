#include <stdio.h>
// prefix  ++age; // fisrt increment by 1 than return the value
// postfix  age++; // first return the value than increment by 1
int main() {
    int a = 5;
    int x, y;

    x = a++; //x = 5    a = 6
    y = ++a; // y = 7   a = 7 

    printf("value of x = %d\n", x);
    printf("value of y = %d\n", y);

    return 0;
}