#include <stdio.h>
int main()
{
    int n, x, add = 0;
    printf("Enter a five digit number: ");
    scanf("%d", &n);
    x = n % 10;
    n = n / 10;
    add += x;
    x = n % 10;
    n = n / 10;
    add += x;
    x = n % 10;
    n = n / 10;
    add += x;
    x = n % 10;
    n = n / 10;
    add += x;
    x = n % 10;
    n = n / 10;
    add += x;
    printf("The sum is %d", add);
}