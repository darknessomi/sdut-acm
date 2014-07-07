#include <stdio.h>
#include <stdlib.h>
int a[1001][1001];
int main()
{
    
    int i,j,m,n,x;
    double sum ,avg,max;
    while (scanf ("%d%d",&m,&n)!=EOF)
    {
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                scanf("%d",&x);
                a[i][j]=x;
            }
        }
        sum=0;
        for (j=0; j<n; j++)
        {
            max=0;
            for (i=0; i<m; i++)
            {
                if (a[i][j]>max)
                    max=a[i][j];
            }
            sum=sum+max;
        }
        avg=sum/n;
        printf("%.2lf\n",avg);
    }
    return 0;
}
