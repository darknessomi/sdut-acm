#include <stdio.h>
int main()
{
 int i,j,m=0,n,k,a[10][10];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	for(j=0;j<n;j++)
 scanf("%d",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
 	for(k=0;k<=i;k++)
  m=m+a[i][k];
 }
 printf("%d\n",m);
 return 0;
}