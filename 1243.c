#include <stdio.h>
main()
{
    int f[57]={1,1,2,3},n,i;
    for(i=4;i<57;i++)
    {
        f[i]=f[i-1]+f[i-3];
    }
    while(scanf("%d",&n)!=EOF&&n!=0)
    {
        printf("%d\n",f[n]);
    }
}