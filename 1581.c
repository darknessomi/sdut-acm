#include "stdio.h"

void main( )
{

    int n, a[10000], i, sum;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }
    
    printf("%d",sum);
}