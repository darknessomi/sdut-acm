#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int timetoseconds(int h,int m,int s)
{
    return (h*60+m)*60+s;
}
void secondstotime(int t,int *h,int *m,int *s)
{
    *s=t%60; t/=60;
    *m=t%60; t/=60;
    *h=t%60; t/=60;
}
int main()
{
    int h1,m1,s1,h2,m2,s2;
    scanf("%02d:%02d:%02d",&h1,&m1,&s1);
    scanf("%02d:%02d:%02d",&h2,&m2,&s2);
    int t1=timetoseconds(h1,m1,s1);
    int t2=timetoseconds(h2,m2,s2);
    int dt=labs(t1-t2);
    int dh,dm,ds;
    secondstotime(dt,&dh,&dm,&ds);
    printf("%02d:%02d:%02d\n",dh,dm,ds); // %02d %02d %02d，都需要补前导0
    return 0;
}