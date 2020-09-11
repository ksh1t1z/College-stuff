#include <stdio.h>
#define total 500
int main()
{
    float FA, MP, E, M, C;
    float agg, per;
    printf("Enter marks in FA, MP, E, M, and C(seperate by space): ");
    scanf("%f %f %f %f %f", &FA, &MP, &E, &M, &C);
    agg = FA + MP + E + M + C;
    pere = (agg / total) * 100;
    printf("The aggregate marks is %.2f and percentage is %.2f", agg, per);
    return 0;
}