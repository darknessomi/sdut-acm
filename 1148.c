#include <stdio.h>
int main()
    {
     int x,y,z,a,b,c;
     scanf("%d %d %d",&x,&y,&z);
     a=x+y;
     b=x+z;
     c=y+z;
     a=a>b?a:b;
    printf("%d\n",a>c?a:c);
   }
