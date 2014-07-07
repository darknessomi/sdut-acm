#include <stdio.h>
#include <math.h>
double f(int n,double x);
int main()
{
    int n;
    double x,s;
    scanf("%lf %d",&x,&n);
    s=f(n,x);
    printf("%.2lf\n",s);
    return 0;
}
double f(int n,double x)
{
    double sum;
    if(n==1)
        sum=sqrt(1+x);
    else
        sum=sqrt(n+f(n-1,x));
    return sum;
}
