#include <stdio.h>
int main()
{
int m;
printf("please  input nuber : \n");
scanf("%d",&m);
if ((m%4==0 && m%100!=0) || m%400==0) {
           printf("%d  year is leap year\n",m);
    }
   else 
       {
            printf("%d  year is  not leap year\n",m);
      }
   return 0;
}