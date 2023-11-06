#include <stdio.h>

int main() {
    int sum = 0;
            
    for(int i = 1; i <= 20; i+=1) {
        //sum = sum + i;
        sum += i;    
        
    }

    printf("Sum of 10 natural number is %d\n", sum);

    
    return 0;
}