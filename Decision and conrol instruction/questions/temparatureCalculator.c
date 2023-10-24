#include <stdio.h>

int main() {
    char choice;
    float celcius, fehrenheit;

    printf("Do you want to convert celsius to fehrenheit (y/n): ");
    scanf("%c", &choice);
     

     // y == y - true 
    if(choice == 'y' || choice == 'Y') {
        // celcius to fehrenheit
        printf("Enter the celcius value= ");
        scanf("%f", &celcius);
        //  fehrenheit = (Celcius × 9/5) + 32

        fehrenheit = (celcius * 9/5) + 32;

        printf("Fehrenheit = %.2f\n", fehrenheit);

    } else if (choice == 'n') {
        // fehrenheit to celcius
        printf("Enter the fehrenheit= ");
        scanf("%f", &fehrenheit);

        //  celcius = (F − 32) × 5/9 
        celcius = (fehrenheit - 32) * 5/9;

        printf("Celcius = %.2f", celcius);
    }

    return 0;
}