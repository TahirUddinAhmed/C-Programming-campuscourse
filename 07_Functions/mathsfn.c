#include <stdio.h>
#include <math.h>

void sayHello() {
    printf("\nHello\n");
}

int main() {
    // sqrt() function
    float n = 16;
    float result = sqrt(n);

    // ceil(): rounds a number upwards to its nearest integer.
    printf("%f\n", ceil(1.2)); 
    // floor(): round a number downwards to its nearest integer. 
    printf("%f\n", floor(1.7));

    // pow(): this function returns the value of x to the power y
    printf("%f\n", pow(3, 3));

    // call the sayHello function
    sayHello();
   
    return 0;
}