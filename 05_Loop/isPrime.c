// prime number    11
#include <stdio.h>

int main() {
	int num, isPrime = 1; // 
	scanf("%d", &num); 
	
	int i = 2;    //
	while(i < num) {
		if(num % i == 0) {
            isPrime = 0;
            break; 
		} 
        i++;
	}
	
    if(isPrime == 0) {
    	printf("Number is not Prime");
	} else if (isPrime == 1) {
		printf("Number is prime");
	}
	
	return 0;
}
              





