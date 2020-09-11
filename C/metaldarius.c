#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    int r1 = 10;
    int r2 = 12;
    float vol1, vol2, tVol, r3, x;
    vol1 = 4 / 3 * PI * r1 * r1 * r1;
    vol2 = 4 / 3 * PI * r2 * r2 * r2;
    tVol = vol1 + vol2;
    x = tVol / (4 / 3 * PI);
    r3 = cbrt(x);
    printf("The radius of merged sphere is %.2f", r3);
}