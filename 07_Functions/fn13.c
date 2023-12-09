#include <stdio.h>
 
 int asciiConvert(char ch) {
    return ch;
 }

int main() {
    int convert = asciiConvert('a');

    printf("%d\n", convert);
    return 0;
}