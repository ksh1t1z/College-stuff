#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter five numbers(seperate with a space): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    // for greatest
    if (a > b && a > c && a > d && a > e)
        printf("%d is the largest", a);
    else if (b > c && b > d && b > e)
        printf("%d is the largest.");
    else if (c > d && c > e)
        printf("%d is the largest", c);
    else if (d > e)
        printf("%d is largest", d);
    else
        printf("%d is largest", e);

    printf("\n");
    // for smallest
    if (a < b && a < c && a < d && a < e)
        printf("%d is the smallest", a);
    else if (b < c && b < d && b < e)
        printf("%d is the smallest.");
    else if (c < d && c < e)
        printf("%d is the smallest", c);
    else if (d < e)
        printf("%d is smallestt", d);
    else
        printf("%d is smallest", e);
}
