#include <stdio.h>

int main() {
	int marks = 65;
    
        //65 > 80 - FALSE
    if(marks > 80) {
    	printf("A\n");
	} else if(marks > 50 && marks < 80) { // 65 > 50 - TRUE AND 65 < 80 - true
		printf("B\n");
	} else if(marks > 30 && marks < 50) { // 35 > 30 - true  AND 35 < 50 - TRUE
		printf("C\n");
	} else {
		printf("You are fail");
	}
	
	
	return 0;
}