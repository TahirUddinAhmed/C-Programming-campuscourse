#include <stdio.h>

void divideBySeven(int a) {
    if(a % 7 == 0) {
        printf("%d is divisible by 7", a);
    } else {
        printf("%d is not divisible by 7", a);
    }

    //  
}

int main() {

    divideBySeven(21);

    printf("This is number you entered is not divible by 7");
    return 0;
}