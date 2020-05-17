//printing diamond pattern
#include <stdio.h>
int main()
{
    int n, i, j, a=1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    a = n-1;
    for(i=1; i<=n; i++){
        for(j=1; j<=a; j++){
            printf(" ");
        }
        a--;
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    a = 1;
    for(i=1; i<=n; i++){
        for(j=1; j<=a; j++){
            printf(" ");
        }
        a++;
        for(j=1; j<=2*(n-i)-1; j++){
            printf("*");
        }
        printf("\n");
    } 
    return 0;
}