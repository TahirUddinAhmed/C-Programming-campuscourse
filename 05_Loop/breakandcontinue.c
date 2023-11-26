// prime number
// continue & break
// loop : break will end the loop 
// loop : continue skip 

#include <stdio.h>

int main() {
	int i = 1;
	
//	while(i <= 10) {
//		printf("%d", i);
//		
//		if(i >= 5) { // 6 >= 5 - true
//			break; // terminate the loop
//		}
//		
//		i++;
//	}

    while(i <= 10) { // 1 2 3 4 5 
    	
//    	continue
        if(i == 5) {
        	i++; // i = 6 
        	continue;
		}
		
    	printf("%d\n", i); // 1 2 3 4 skip 6 7 8 9 10 
    	
    	i++;  // skip i = 7
	}



	return 0;
}
