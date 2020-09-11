#include <stdio.h>
#include <string.h>
int main()
{
    int hour, min, n;
    char ch = 'y';
    while (ch == 'y')
    {
        printf("Enter minutes you want to convert: ");
        scanf("%d", &n);
        hour = n / 60;
        min = n % 60;
        printf("%d hours and %d minutes\n", hour, min);
        printf("Do you want to do it again?(y/n): ");
        scanf("%s", &ch);
    }
    return 0;
}