#include <stdio.h>
int main()
{
    int n, a, b, c, d, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    d = n % 10;
    n = n / 10;
    c = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    a = n % 10;
    rev = d * 1000 + c * 100 + b * 10 + a * 1;
    printf("\nThe reverse number is %d", rev);
}