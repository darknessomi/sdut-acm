#include <stdio.h>
char b[201];
int main(){
int i, j, n, c;
b[1] = 1;
for (i=2; i<=15; ++i){
   if (b[i] == 0){
    for (j=i*i; j<=200; j+=i){
     b[j] = 1;
    }
   }
}
n = 0;
for (i=100; i<=200; ++i){
   if (b[i] == 0){ ++n; }
}
printf("%d\n", n);
c = 0;
for (i=100; i<=200; ++i){
   if (b[i] == 0){
    if (c){ printf(" "); }
    c = 1;
    printf("%d", i);
   }
}
printf("\n");
return 0;
}