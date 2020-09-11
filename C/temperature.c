#include <stdio.h>
int main()
{
    float C, F;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) / 1.8;
    printf("Temperature in Celcius is %.2f", C);
    return 0;
}