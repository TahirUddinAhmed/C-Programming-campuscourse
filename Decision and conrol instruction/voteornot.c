//Create a C program that takes a user's age as input and then 
//checks if they are eligible to vote (18 years or older). 
//If eligible, print "You can vote", otherwise, print "You cannot vote"

//age - (input)
//
//if  age greater then 18 
//    - print -> "you can vote"
//otherwise 
//    -print -> "You can't vote"

#include <stdio.h>

int main() {
	int age;
	printf("Please enter your age: ");
	scanf("%d", &age);
	
	// condition
	if(age > 18) {
		printf("You can vote");
	} else {
		printf("You can't vote");
	}
	
	return 0;
}
