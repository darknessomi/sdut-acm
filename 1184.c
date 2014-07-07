
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    double h, sum;
    int n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lf %d", &h, &n);
        sum = h+2*h*(1-pow(0.5, n-1));//h+2h*(1-0.5^(n-1))//
        h=h*(pow(0.5, n));//h*0.5^n//
        printf("%.2lf %.2lf\n", sum, h);
    }
    return 0;
}
