#include <stdio.h>

// user: -89        -89 < 0 - true
// user: -12         -12 < 0 - true
// user: 15          15 < 0 - false
int main() {
	int num;
	
	do {
		printf("Enter a positive number: ");
		scanf("%d", &num);
		
		// update 
	} while(num < 0);
	
	
	
	return 0;
}