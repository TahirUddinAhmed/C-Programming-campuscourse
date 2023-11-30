#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("plese enter your number: ");
    scanf("%d", &a);

    float result = sqrt(a);

    printf("%f\n", result);

    return 0;
}