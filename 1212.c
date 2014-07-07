#include <stdio.h>
#include <math.h>
int main(){
    int n,t;
    while(scanf("%d",&n),n)
        printf("%.0lf\n",ceil(log((n))/log(3.0)));
    return 0;
}
