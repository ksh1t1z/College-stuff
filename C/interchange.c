#include <stdio.h>
int main()
{
    float x, y, temp;
    printf("Enter a number: ");
    scanf("%f", &x);
    printf("Enter another number: ");
    scanf("%f", &y);
    printf("First variable has %.2f and second has %.2f\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("Now first variable has %.2f and second variable has %.2f", x, y);
}