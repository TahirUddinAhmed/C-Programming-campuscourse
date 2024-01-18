#include <stdio.h>

int main()
{
    int arr[10];

    for(int i = 0; i < 10; i++) {
        printf("Enter %d number: ", i);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(int);
    int result = 0;
    for(int i = 0; i < 10; i++) {
        result += arr[i];
    }

    printf("Total marks is: %d", result);

    return 0;
}