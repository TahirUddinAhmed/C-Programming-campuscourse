#include <stdio.h>

int main() {
	int age = -15;
	
//	age > 18 - "Your age is greater than 18 years"
//  age > 10 AND age < 18- "your age is less 18 and greater than 10 years"
//  age < 10 AND age > 0 - "You are child"

    if(age > 18) {
    	printf("Your age is greater than 18 years");
	} else if(age > 10 && age < 18) {
		printf("Your age is less than 18 and greater than 10 years");
	} else if(age < 10 && age > 0) {
		printf("You are a child");
	} else {
		printf("Please enter a valid age");
	}
	
	return 0;
}

