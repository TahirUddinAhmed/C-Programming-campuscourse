// prime number
// continue & break
// loop : break will end the loop 
// loop : continue skip 

#include <stdio.h>

int main() {
	int i = 1;
	
	while(i <= 10) {
		printf("%d", i);
		
		if(i >= 5) { // 6 >= 5 - true
			break; // terminate the loop
		}
		
		i++;
	}

//    while(i <= 10) {
//    	printf("%d\n", i);
//    	
////    	continue
//        if(i == 5) {
//        	continue;
//		}
//    	
//    	i++;
//	}



	return 0;
}
