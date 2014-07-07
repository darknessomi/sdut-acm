#include <stdio.h>
#include <math.h>
int main()
{
 int n,i,num,max;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&num);
  if(0==i)
   max=num;
  else
   if(abs(max)<abs(num))
    max=num;
 }
 printf("%d\n",max);
}
