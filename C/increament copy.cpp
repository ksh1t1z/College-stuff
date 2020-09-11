#include <stdio.h>
int main()
{
    int a, b, c;
    a = 5;
    printf("%d ", a);
    b = ++a + ++a + --a + --a + a++;
    c = ++b + b++ + --a;
    printf("%d ", a);
    printf("%d ", b);
    printf("%d", c);
    return 0;
}