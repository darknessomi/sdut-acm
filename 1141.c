#include <stdio.h>
int main()
{
 int i,j,a,f,s=0;
 float b,r=0;
 double c,t=0;
 for (i=0;i<5;i++)
 {
  scanf("%d",&a);
  s=s>a?s:a;
 }
 printf("%d\n",s);
 for (i=0;i<5;i++)
 {
  scanf("%f",&b);
  r=r>b?r:b;
 }
 printf("%.2f\n",r);
 for (i=0;i<5;i++)
 {
  scanf("%lf",&c);
  t=t>c?t:c;
 }
 printf("%.0lf\n",t);
}