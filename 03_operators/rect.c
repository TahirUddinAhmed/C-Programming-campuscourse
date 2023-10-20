// Write a program that calculates the area of a reactangle. 
//  (take input from user)
 
#include<stdio.h>

int main(){
	float Length;
	float Width;
	float result;
	printf("enter the Length:");
	scanf("%f",&Length);
	printf("enter the width:");
	scanf("%f",&Width);
	result = Length*Width;
	
	printf("%f",result);
	return 0;
}
 