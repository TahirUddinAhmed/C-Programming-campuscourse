#include <stdio.h>

int main() {
    char ch = 's';  // 35


       // 35 >= 97 - false
    if(ch >= 97 && ch <= 122) {
        printf("Lowercase");
    } else if (ch >= 65 && ch <= 90) { // 35 >= 65 - false
        printf("Uppercase");
    } else {
        printf("Please enter alphabets only (a-z) or (A-Z)");
    }

    return 0;
}