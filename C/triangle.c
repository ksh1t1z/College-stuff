// to calculate the area of a triangle if the sides of a triangle
// is 10 units, 16 units and 22units.
#include <stdio.h>
#include <math.h>
int main()
{
    int s1, s2, s3, x;
    float s, area;
    s1 = 10;
    s2 = 16;
    s3 = 22;
    s = (s1 + s2 + s3) / 2;
    x = s * ((s - s1) * (s - s2) * (s - s3));
    area = pow(x, 0.5);
    printf("The area of triangle is %.2f", area); //area = 51.38 unit sq.
}