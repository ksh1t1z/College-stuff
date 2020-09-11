#include <stdio.h>
int main()
{
    int n;
    printf("Enter a four digit number: ");
    scanf("%d", &n);
    int a, b, s = 0;
    a = n % 10;
    b = (n % 10000) / 1000;
    s = a + b;
    printf("\nThe sum of first and last digits is %d", s);
}