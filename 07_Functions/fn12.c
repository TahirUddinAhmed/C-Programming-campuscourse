#include <stdio.h>

// create a function - "division"
// 5/2 = 2.5
float division(int n1, int n2) {
    float res = (float) n1 / n2;

    return res; // 2.5
}

int main() {
    // int a = 5, b = 2;
    float c = division(56, 47);

    printf("Division is %f\n", c);
    printf("Another division is %f\n", division(12, 5));




    printf("%f\n", c);
    
    return 0;
}


// write a function that will except two integer parameters
// and return the multiplication. 