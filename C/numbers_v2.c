#include <stdio.h>

int main()

{
    int a, b, c, d, e;
    printf("Enter five numbers(seperate with a space): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    // for greatest
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf("%d is greatest.", a);
                }
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            if (b > e)
            {
                printf("%d is greatest", b);
            }
        }
    }
    else if (c > d)
    {
        if (c > e)
        {
            printf("%d is the greatest", c);
        }
    }
    else if (d > e)
    {
        printf("%d is greatest.", d);
    }
    else
    {
        printf("%d is greatest", e);
    }
    
    printf("\n");
    
    // for smallest
    if (a < b)
    {
        if (a < c)
        {
            if (a < d)
            {
                if (a < e)
                {
                    printf("%d is smallest", a);
                }
            }
        }
    }
    else if (b < c)
    {
        if (b < d)
        {
            if (b < e)
            {
                printf("%d is smallest", b);
            }
        }
    }
    else if (c < d)
    {
        if (c < e)
        {
            printf("%d is the smallest", c);
        }
    }
    else if (d < e)
    {
        printf("%d is smallest.", d);
    }
    else
    {
        printf("%d is smallest", e);
    }
}
