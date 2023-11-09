#include <stdio.h>
// 5 = 1 * 2 * 3 * 4 * 5
int main() {
	int number, factorial = 1;
	
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	for(int i = 1; i <= number; i++) {
		factorial *= i;
	}
		
	printf("Factorial is %d", factorial);
	
	return 0;
}