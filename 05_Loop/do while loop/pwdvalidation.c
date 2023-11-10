#include <stdio.h>

/*
1111      1111 != 12345 - true

enter your password: 12345  
*/

int main() {
	int reg_pwd = 12345;
	int current_pwd;
	
	do {
		printf("Enter Your Password: ");
		scanf("%d", &current_pwd);
	} while(current_pwd != reg_pwd);
	
	return 0;
}