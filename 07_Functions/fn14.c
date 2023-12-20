// Find out weather the driver is eligible 
// for insurance or not
#include <stdio.h>
int main() {
    int age = 19;
    char hasCar = 'y'; // y - true, n - false

    if(age > 18 && hasCar == 'y') {
        printf("Yes, he is eligible");
    } else {
        printf("No, he is not eligible");
    }

    return 0;
}
