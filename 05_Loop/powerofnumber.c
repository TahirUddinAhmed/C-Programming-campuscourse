//user : 3
//power: 4
//
//3 to the power 3
//
//3 * 3 * 3 = 81
#include <stdio.h>

int main() {
	int num, power;
	int result = 1;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("Enter the power: ");
	scanf("%d", &power);
	
	for(int i = 1; i <= power; ++i) {
		result = result * num;
	}
	
	printf("result = %d\n", result);
	
	
	
	return 0;
}

