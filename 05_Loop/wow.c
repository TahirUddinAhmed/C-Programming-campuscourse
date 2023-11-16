#include <stdio.h>

int main() {
	int i = 1;
	
	while(i <= 30) {
//		if number is divisible by 3 then print - "wow"
//		otherwise print the number
		if(i % 3 == 0) {
			printf("wow\n");
		} else {
			printf("%d\n", i);
		}
		
		// increment the value i by 1
		i++;
	}
	return 0;
}