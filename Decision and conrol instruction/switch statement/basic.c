// question: 
//  a = 2;

//  a == 1: 
        //printf("January");
    // a == 2: 
        //print -> "February";
    // a == 3: 
       //print ->"March";
    // default: 
    //    please enter a valid month

#include <stdio.h>

int main() {
    int day = 2;

//    switch statement 
     //      2
     switch(day) {
        case 1: 
           printf("Sunday\n");
           break;
        case 2: 
           printf("Monday\n");
           break;
        case 3: 
           printf("Tuesday\n");
           break;
        default: 
           printf("Please enter a valid day");
           break;
     }

    return 0;
}