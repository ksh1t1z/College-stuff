#include <stdio.h>
int main()
{
    float km, m, cm, ft, in;
    printf("Enter distance in km: ");
    scanf("%f", &km);

    m = km * 1000;
    cm = m * 100;

    ft = km * 3280.83;
    in = ft * 12;

    printf("The length in metre is %.2f\n", m);
    printf("The length in centimetre is %.2f\n", cm);
    printf("The length in feet is %.2f\n", ft);
    printf("The length in inch is %.2f\n", in);
    return 0;
}
