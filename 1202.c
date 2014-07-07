#include <math.h>
#include <stdio.h>
int main(){
double a, b, c, p;
while (scanf("%lf %lf %lf", &a, &b, &c) == 3){
   p = (a+b+c)/2;
   printf("%.3lf\n", sqrt(p*(p-a)*(p-b)*(p-c)));
}
return 0;
}