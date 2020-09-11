#include <stdio.h>
#define pi 2.14
int main()
{
    float l, b, r, areaC, areaR;
    float peri, circ;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    areaC = pi * r * r;
    circ = 2 * pi * r;
    peri = 2 * (l + b);
    areaR = l * b;
    printf("The area and perimeter of rectangle is %.2f and %.2f respectively\n", areaR, peri);
    printf("The area of circle is %.2f and circumference is %.2f", areaC, circ);
}