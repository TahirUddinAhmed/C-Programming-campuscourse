#include <stdio.h>

int main() {   
    // ++age,          age++
    int age = 19;
    int updateAge = age++; // updateAge = 19      age = 20

    printf("updated age is = %d\n", updateAge);
    return 0;
}

// increment / decrement operator 
// 2 ways : 

//   1. prefix - (++variable)
//   2. postfix - (variable++)

