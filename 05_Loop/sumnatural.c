#include <stdio.h>

int main() {
	// 15 natural number sum 
	int i = 1;
	int sum = 0;
	
	while(i <= 15) 
	{
		sum = sum + i;
		i++;
	}
	
	printf("Sum of first 15 natural number is %d\n", sum);
	
	return 0;
}