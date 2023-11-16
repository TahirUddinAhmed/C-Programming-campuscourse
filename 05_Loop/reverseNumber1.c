#include <stdio.h>

int main() {
	int num, lastDigit, reverse = 0;
	scanf("%d", &num); // 124 
	
	// 246 != 0    
	// last = 2   
	// rev = 642
//	       0 != 0
	while(num != 0) {
		lastDigit = num % 10;  // 24 % 10 = 2
		reverse = reverse * 10 + lastDigit; // 64 * 10 + 2
		num = num / 10; // num / 10  2 / 10
		
	}
	
	printf("The reverse number is %d\n", reverse);
	return 0;
}