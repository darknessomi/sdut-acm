#include <stdio.h>
int main()
{

int m, n,i,t;

scanf("%d",&n);

for(i=1;i<=n;i++)
{
 
   for(m=n-i;m>=1;m--)//here
    {
 printf(" ");
    }
    for(t=2*i-1;t>=1;t--)
    {
 printf("*");
    }
    printf("\n");
}

for(i=n-1;i>=1;i--)
{
    for(m=n-i-1;m>=0;m--)//here
    {
 printf(" ");
    }
    for(t=2*i-1;t>=1;t--)
    {
 printf("*");
    }
    printf("\n");
}
return 0;
}