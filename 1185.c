#include <stdio.h>
void main()
{
   	int n,i,j,a[3][3];
   	for(i=1;i<=3;i++)
   	for(j=1;j<=3;j++)
   	{
	 	scanf("%d",&a[i][j]);
   	}
   	n=a[1][1]+a[2][2]+a[3][3];
   	printf("%d",n);
}