#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i=1; i<=n-1; i++)
        printf(" ");
    printf("+\n");
    for (i=2; i<n*2-1; i++)
    {
        if (i <= n)
        {
            for (j=1; j<=n-i; j++)
                printf(" ");
            printf("+");
            for (j=1; j<=(i-1)*2-1; j++)
                printf("*");
            printf("+");
        }
        else
        {
            for (j=1; j<=i-n; j++)
                printf(" ");
            printf("+");
            for (j=1; j<=2*n-3-(i-n)*2; j++)
                printf("*");
            printf("+");
        }
        printf("\n");
    }
    for (i=1; i<=n-1; i++)
        printf(" ");
    printf("+\n");
    return 0;
}