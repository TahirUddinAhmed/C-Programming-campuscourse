#include <stdio.h>

int main() {
	int num, lastDigit, reverse = 0;
	scanf("%d", &num); // 124          
	
	while(num != 0) {
		lastDigit = num % 10;
		reverse = reverse * 10 + lastDigit;
		num = num / 10;
		
	}
	
	printf("The reverse number is %d\n", reverse);
	return 0;
}