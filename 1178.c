#include <stdio.h>
int main()
{
 int i;
 int a[10];
 for(i=1;i<=10;i++)
 scanf("%d",&a[i]);
 for(i=10;i>=1;i--)
 {
  if(i==1)
  printf("%d",a[i]);
  else
 printf("%d ",a[i]);
 }
 return 0;
}