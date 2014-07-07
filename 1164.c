#include <stdio.h>
int main()
{
 int i,j,n,d[100][100];
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {
  for (j=0;j<n;j++)
  {
   scanf("%d",&d[i][j]);
  }
 }
 for (i=0;i<n;i++)
 {
  for (j=0;j<n-1;j++)
  {
   printf("%d ",d[j][i]);
  }
  printf("%d\n",d[j][i]);
 }
}