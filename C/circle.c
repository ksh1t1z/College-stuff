#include <stdio.h>
#define PI 3.14
int main()
{
    int radius;
    float area, circumference;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("The area is %.2f and circumference if %.2f", area, circumference);
    return 0;
}