#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    a = 5;
    b = 6;
    c = a++ + b--;                         //a=5(pre)/6(post), b=6(pre)/5(post), c = 11
    d = (c > 14) ? ++a : ++b;              //a = 6, c= 11,b = 6,d = 6
    e = ++a + a-- + ++b + ++c - c-- + d++; //b = 7, a = 7(pre)/6(post), c = 12(pre)/11(post), d=6 //7+7+7+12-12+6
    printf("a = %d\n", a);                 //6
    printf("b = %d\n", b);                 //7
    printf("c = %d\n", c);                 // 11
    printf("d = %d\n", d);                 // 7
    printf("e = %d\n", e);                 // 27
}