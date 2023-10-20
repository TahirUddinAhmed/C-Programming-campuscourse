// Write a c program which will increment a product price by 2 times.
// print the output (use assignment operator)

//  price = 500;
 
 // output: 1000

#include <stdio.h>

int main() {
	int price = 300;
	
	price *= 2; // price = price * 2;
	
	printf("Price is now %d\n", price);
	
	return 0;
}