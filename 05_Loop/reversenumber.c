#include <stdio.h>

int main() {
	int num;
	int lastDigit;
	int res;
	int update;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(num > 0) {
//		find the last digit
        lastDigit = num % 10;
        res += lastDigit * 10 / 10;
        update = num / 10;
	}
	
	printf("%d", res);
	
	
	return 0;
}