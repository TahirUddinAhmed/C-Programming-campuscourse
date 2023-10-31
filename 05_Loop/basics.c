// what ?
// why - loop 

// 3 types - 
//   1. for loop 
//   2. while loop 
//   3. do while

//"Hello" 5 times 

#include <stdio.h>

int main() {
    // DRY - Do not Repeat again
    // count = 1
        // print - "Hello World";
    // count = 2
        // print - "Hello World";
                       //2 <= 5 - true
    // .
    // .
    // .

    // count 6
                       //6 <= 5 -false
    for(int count = 1; count <= 5; count += 1)  {
        printf("Hello world\n");
    }

    return 0;
}