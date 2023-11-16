#include <stdio.h>

int main() {
	int i = 1;
	
	while(i <= 20) {
		// logic to find if i is even 
		if(i % 2 == 0) {
			printf("%d\n", i);
		} else {
			printf("odd\n");
		}
		
		i++;
	}
	return 0;
}


// write a program to print all the numbers from 
// 1 to 30 'if numbers are divisible by 3 "WOW"'


//output: 
//1
//2
//WOW
//4
//5
//WOW
//7
//8
//WOW














