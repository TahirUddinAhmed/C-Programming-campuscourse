#include <stdio.h>

int main() {
    // integer number and character 
    // boolean value (true or false)
    // float, double, int, character
    char gender = 'm';

    //       m
    switch(gender) {
        case 'f': 
           printf("You are a female");
           break;
        case 'm':
           printf("You are a male\n");
           printf("You are so strong");
           break;
        deafult: 
           printf("Others");
    }

    return 0;
}