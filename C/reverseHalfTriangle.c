#include <stdio.h>
int main()
{
    printf("Enter number of rows: ");
    int rows;
    scanf("%d", &rows);
    for(int i=rows; i>=0; i--){
        for(int j=i; j>=i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}