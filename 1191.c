#include <stdio.h>
void main()
{
int n,a,b,c,d,e,s,t;
scanf("%d",&n);

   t=n%10000;
   a=(n-t)/10000;
   s=t%1000;
   b=(t-s)/1000;
   t=s%100;
   c=(s-t)/100;
   s=t%10;
   d=(t-s)/10;
   e=s;
   if(a!=0)
   {
    printf("5\n");
      printf("%d %d %d %d %d\n",a,b,c,d,e);
      printf("%d %d %d %d %d\n",e,d,c,b,a);
   }
   else
   {
    if(b!=0)
    { printf("4\n");
       printf("%d %d %d %d\n",b,c,d,e);
          printf("%d %d %d %d\n",e,d,c,b);
    }
    else
    {
     if(c!=0)
     {
      printf("3\n");
           printf("%d %d %d\n",c,d,e);
              printf("%d %d %d\n",e,d,c);
     }
     else
     {
       if(d!=0)
       { 
        printf("2\n");
              printf("%d %d\n",d,e);
                 printf("%d %d\n",e,d);
       }
       else
       {
       printf("1\n");
       }
     }
    } 
   } 
}