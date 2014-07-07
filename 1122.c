#include <math.h>
#include <stdio.h>
char isprime(int n){
if (n == 1){ return 0; }
if (n==2 || n==3){ return 1; }
if ((n&1)==0 || n%3==0){ return 0; }
int i, q = (int)sqrt(n);
for (i=5; i<=q; ){
   if (n%i == 0){ return 0; }
   i += 2;
   if (n%i == 0){ return 0; }
   i += 4;
}
return 1;
}
int main(){
int n;
while (scanf("%d", &n) == 1){
   printf("This is%s a prime.\n", isprime(n) ? "" : " not");
}
return 0;
}