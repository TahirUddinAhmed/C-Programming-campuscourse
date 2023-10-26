#include <stdio.h>

int main() {
	// password = 1234
	int password = 1234;
	
//	input_pwd = 
    int input_pwd;
    printf("Enter your password? ");
    scanf("%d", &input_pwd);
    
//    condition 
      if(password == input_pwd) {
      	printf("Congrats, You are welcome to the system\n");
	  } else {
	  	printf("Sorry, password is incorrect");
	  }

//    enroll 
//    password is incorrect
	return 0;
}