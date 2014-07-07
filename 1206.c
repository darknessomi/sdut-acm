#include <stdio.h>
int main(){
double r;
int a, b, t, n;
while (scanf("%d", &n) == 1){
   r = 0; a = 1; b = 2;
   while (n-- != 0){
    r += (double)b/a;
    t = a;
    a = b;
    b += t;
   }
   printf("%.6lf\n", r);
}
return 0;
}